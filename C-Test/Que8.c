#include <stdio.h>
int main()
{
    char cha;
    int a,b,result;
    printf("PLEASE ENTER A CHARACTER:");
    scanf("%c %d %d",&cha,&a,&b);
    do{
        if(cha=='+')
        {
            result=a+b;
            printf("ADDITION ODF TWO NUMBER IS %d",result);
        }
        else if(cha=='-')
        {
            result=a-b;
            printf("ADDITION ODF TWO NUMBER IS %d",result);
        }
        else if(cha=='*')
        {
            result=a-b;
            printf("ADDITION ODF TWO NUMBER IS %d",result);
        }
        else if(cha=='/')
        {
            if(b!=0)
            {
                result=a/b;
                printf("ADDITION ODF TWO NUMBER IS %d",result);
            }
            else
            {
                printf("WE CAN't DIVIDE WITH ZERO");
            }
        }
        else
        {
            printf("INVALID OUTPUT");
        }
    }while(cha=='.');
}