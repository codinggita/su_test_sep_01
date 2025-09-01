#include<stdio.h>
int main()
{
    char character;
    printf("Enter a character:-");
    scanf("%c",&character);
    int a = character;
    if(a>=65&&a<=90){
        printf("%c is a alphabet",character);
    }
    else if(a>=97&&a<=122){
        printf("%c is a alphabet",character);
    }
    else if(a>=48&&a<=57){
        printf("%c is a digit",character);
    }
    else{
        printf("%c is a special symbol",character);
    }
    return 0;
}