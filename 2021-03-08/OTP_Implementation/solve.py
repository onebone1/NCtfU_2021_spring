from pwn import *

p = process(['gdb', './otp'])
p.recvuntil('pwndbg>')
p.sendline('b strncmp@plt')
p.recvuntil('pwndbg>')

chars = '1234567890abcdef'
s = ''

for i in range(100):
    for j in chars:
        p.sendline('r ' + s + j + '1'*(99 - i))
        p.recvuntil('pwndbg>')
        p.sendline('x/s $rsi')
        first = p.recvuntil('pwndbg>')
        p.sendline('x/s $rdi')
        second = p.recvuntil('pwndbg>')
        # print(first)
        # print(second)
        if first[41 + i] == second[41 + i]:
            s += j
            print(s)
            break
 
