#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);

    if(c>='A' & c<='Z'){
        printf("its alphabet");
    }
    else if(c>=0 & c<=9)
    {
        printf("its a digit");
    }
    else if(c>='a' &c<='z'){
        printf("its a alphabet");
    }
    else{
        printf("special symbol");
    }
    return 0;;;
}
