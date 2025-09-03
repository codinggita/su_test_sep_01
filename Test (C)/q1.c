#include <stdio.h>
int main()
{
    char a;
    
    printf("Input: ");
    scanf("%c", &a);
    if(a>=65 && a<=120){
        printf("It is an Alphabet");
    }
    else if(a>=48 && a<=57){
        printf("It is a digit");
    }
    else{
        printf("It's a Special symbol");
    }
    return 0;
}