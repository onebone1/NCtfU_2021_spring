int main() {
    int a;
    scanf("%d", &a);
    if (a < 0) {
        puts("a is a negative integer");
    }
    else if (a > 0) {
        puts("a is a positive integer");
    }
    else {
        puts("a == 0");
    }
    return 0;
}
