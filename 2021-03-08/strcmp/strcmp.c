int main() {
    char *str1 = "hello";
    char *str2 = (char*)malloc(sizeof(char));
    gets(str2);

    int i = strcmp(str1, str2);
    if(i == 0) {
        puts("same");
    } else {
        printf("%d\n", i);
    }

    return 0;
}
