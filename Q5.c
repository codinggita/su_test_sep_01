#include <stdio.h>

int main() {
    int number, latest, reversed = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    latest = number;

    while (number != 0) {
        remainder = number % 10;               
        reversed = reversed * 10 + remainder;  
        number /= 10;                          
    }

    if (latest == reversed) {
        printf("%d is a palindrome number.\n", latest);
    } else {
        printf("%d is not a palindrome number.\n", latest);
    }

    return 0;
}