#include <stdio.h>

int main(void) {
    int n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n; 

    
    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        digit = n % 10;     
        sum += digit;       
        n /= 10;            
    }

    printf("The sum of digits of %d is %d\n", original, sum);

    return 0;
}














