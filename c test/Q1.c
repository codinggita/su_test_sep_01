
#include <stdio.h>

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    int a = (int)character;

    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        printf("Entered character is an alphabet\n");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("Entered character is a number\n");
    }
    else
    {
        printf("Entered character is a special symbol\n");
    }

    return 0;
}
