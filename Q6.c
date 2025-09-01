//Write a C program to accept a number and find the sum of its digits using while loop.


#include <stdio.h>

int main() {
    int num, digit, sum = 0;

  
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}