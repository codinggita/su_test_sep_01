#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number; 

    
    while (number != 0) {
        remainder = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; 
        number /= 10; // Remove the last digit
    }

   
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}