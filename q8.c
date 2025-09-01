#include <stdio.h>
int main()
{
    int a,b;
    int d,e,f,g;
    scanf("%d %d",&a,&b);
    int i=1;
    do{
        d=a+b;
        e=a-b;
        f=a*b;
        g=a/b;

    }while(i>0);
    printf("%d %d %d %d",d,e,f,g);
    return 0;
}