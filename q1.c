// 1. Character Classification (If–Else)
// Write a C program that accepts a single character from the user and checks whether it is:
// An alphabet (A–Z or a–z)


// A digit (0–9)


// A special symbol (anything else)

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The character is an alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a digit.\n");
    }
    else
    {
        printf("The character is a special symbol.\n");
    }
    return 0;
}
