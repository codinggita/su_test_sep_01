/*
1. Character Classification (If–Else)
Write a C program that accepts a single character from the user and checks whether it is:
An alphabet (A–Z or a–z)


A digit (0–9)


A special symbol (anything else)

*/
#include <stdio.h>

int main()
{
    char character;
    printf("Enter a number: ");
    scanf("%c",&character);

    int ascii= character;
    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122 )){
        printf("alphabet");
    }
    else if(ascii>=48 && ascii<=57){
        printf("digit");
    }
    else{
        printf("special symbol");
    }
    return 0;
}