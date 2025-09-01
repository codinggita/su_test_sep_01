#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter your num: ");
    scanf("%d", &num);

    int i = num;
    while ( i > 0 ) {  
        digit = i % 10;
        sum = digit + sum;
        i = i / 10;
    }

    printf("Sum of digits = %d", sum);


    return 0;
}
