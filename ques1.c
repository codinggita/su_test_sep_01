#include <stdio.h>

int main()
{
    char input;
    printf("ENTER ANY CHARACTER HERE : ");
    scanf("%c",&input);
    
    if(input>='A'&& input<= 'Z')
    {
        printf("ALPHABET");
    }
    else if(input>= 'a' && input<= 'z')
    {
        printf("ALPHABET");
    }
    else if(input>= '0' && input<= '9')
    {
        printf("DIGIT");
    }
    else
    {
        printf("SPECIAL SYMBOL");
    }
    return 0;
}