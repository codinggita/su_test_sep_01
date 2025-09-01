#include <stdio.h>

int main(){
    char input;
    printf("INPUT CHAR :");
    scanf("%c", &input);
    int ascii = input;

    if (ascii >=65  && ascii <=122 )
    {
        printf("its alphabet");
    }
    else if (ascii >=48  && ascii <=57 )
    {
        printf("its digit");
    }
    else
    {
        printf("its special symbol");
    }
    
    return 0;
}