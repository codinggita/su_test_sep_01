// Write a C program to calculate the factorial of a given number using for loop.
#include <stdio.h>

int main() {
	int n, i;
	int factorial = 1;
	printf("Enter a number: ");
	scanf("%d", &n);

	if (n < 0)
		printf("Factorial of a negative number doesn't exist.\n");
	else {
		for (i = 1; i <= n; ++i) {
			factorial *= i;
		}
		printf("Factorial of %d = %llu\n", n, factorial);
	}
	return 0;
}
