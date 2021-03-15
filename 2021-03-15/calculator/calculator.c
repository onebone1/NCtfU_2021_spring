#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>

void handler(){
	puts("Times up");
	exit(1);
}

int cal(int i, int j, int c) {
    if (c == 0) return i + j;
	else if (c == 1) return i - j;
	else if (c == 2) return i*j;
}

int main() {
	time_t t;
	srand((unsigned) time(&t));
    char op[3] = {'+', '-', '*'};

    puts("Faaaaaaaaaaaast!!!!!!!!!");
	alarm(3);
    for (int t = 0; t < 100; t++) {
		int i = rand()%100;
		int j = rand()%100;
		int c = rand()%3;
		printf("%d %c %d = \n", i, op[c], j);
		int ans;
		scanf("%d", &ans);
		if (ans != cal(i, j, c)) {
			puts("Wrong answer!!!");
			exit(2);
		}
	}
	puts("You did it!");
}
