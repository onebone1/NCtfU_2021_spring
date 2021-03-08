char flag[10] = "\x02\x08\x05\x03\x1f\x0c\x05\x0c\x05\x19";

int main() {
    int len = strlen(flag);
    for (int i = 0; i < len; i++) {
        flag[i] ^= 100;
    }
    puts(flag);

    return 0; 
}
