#include <stdio.h>

int main() {
    int num, palindrone, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    palindrone = num; 

    while (num != 0)
     {
        digit = num % 10;          
        reversed = reversed * 10 + digit; 
        num /= 10;                    
    }

    if (palindrone == reversed)
        printf("%d is a palindrome.\n", palindrone);
    else
        printf("%d is not a palindrome.\n", palindrone);

    return 0;
}