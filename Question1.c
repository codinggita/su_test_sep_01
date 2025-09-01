#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("It is an alphabet.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("It is a digit.\n");
    } else {
        printf("It is a special symbol.\n");
    }

    return 0;
}