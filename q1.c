#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    int b=(int)a;
    if(b>=65&&b<=90 || b>=97&&b<=122){
        printf("It is an alphabet");
    }
    else if(b>=48&&b<=57){
        printf("It is a digit");
    }
    else{
        printf("It is a special symbol");
    }
    return 0;
}