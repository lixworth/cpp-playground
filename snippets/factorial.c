#include <stdio.h>

int main(int argc, char *argv[]) {
	int input;
	scanf("%d",&input);
	printf(get_factorial(input));
	return 0;
}

int get_factorial(int arg) {
	int result = 1;
	do {
		result = result*arg;
		arg--;
	} while (arg > 0);
}