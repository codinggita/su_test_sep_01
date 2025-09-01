#include<stdio.h>

int main()
{
    char a;
    printf("Enter value: ");
    scanf("%c",&a);

    if (a>=65 && a<=90 || a>=97 && a<=122)
    {
        printf("Alphabet");
    }
    else if (a<=48 && a>= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Symbol");
    }
    
    return 0;
}