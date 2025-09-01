#include <stdio.h>

int main() {
    char ch;

    // Input a single character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' is an Alphabet.\n", ch);
    }
    // Check if digit
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' is a Digit.\n", ch);
    }
    // Otherwise special symbol
    else {
        printf("'%c' is a Special Symbol.\n", ch);
    }

    return 0;
}
