#include <stdio.h>
int main()
{


    char input;
    scanf("%c", &input);
    if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z')
    {
        printf("ALPHABET");
    }
    else if (input >= '0' && input <= '9')
    {
        printf("a digit");
    }
    else
    {
        printf("special symbol");
    }

    return 0;
}