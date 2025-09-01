#include <stdio.h>

int main() {
     int num, sum=0, digit, i;
    printf("Enter an integer: ");
    scanf("%d", &num);

    i = num;

    while (i > 0) {
        digit = i % 10;
        sum = sum + digit;
        
        i = i/10;}
        
        printf("sum of the digits: %d", sum);

    return 0;
}