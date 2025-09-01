#include <stdio.h>

int main() {
    int num, i, sum, digit;

    printf("Enter a number: ");
    scanf("%d", &num);


    i = num;
    sum = 0;
    while (i > 0) {
        digit = i % 10;
        sum = sum+digit;
        i = i / 10;
    }
    printf("Using while loop, sum of digits = %d\n", sum);


    return 0;
}