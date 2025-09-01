// Q1: Write a C program that accepts a single character from the user and checks whether it is:
// An alphabet (A–Z or a–z)
// A digit (0–9)
// A special symbol (anything else)
#include <stdio.h>

int main() {
    char ch;

    // Input from user
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Check if it's an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an Alphabet.\n", ch);
    }
    // Check if it's a digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    }
    // Otherwise, it should be a special character
    else {
        printf("'%c' is a Special Symbol.\n", ch);
    }

    return 0;
}

