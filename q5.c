// 5. Palindrome Number (While Loop)
// Write a C program to accept a number, reverse it using while loop, and check if it is a palindrome.

#include <stdio.h>
int main() {
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (temp == rev) {
        printf("%d is a palindrome.\n", temp);
    } else {
        printf("%d is not a palindrome.\n", temp);
    }
    return 0;
}