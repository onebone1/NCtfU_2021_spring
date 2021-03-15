int main() {
    char *c = (char*)malloc(sizeof(char));
	puts("Enter any string to continue");
	gets(c);
	int i = 0;
    int *p = &i;
    printf("%d\n", i);
	printf("%p\n", p);
    i = 1;
    printf("%d\n", i);
    printf("%p\n", p);
	*p = 10;
    printf("%d\n", i);
    printf("%p\n", p);

    return 0;
}
