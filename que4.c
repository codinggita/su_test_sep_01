#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    int c=1;
    for(int b=1; b<=a; b++)
    {
        c=c*a;
        printf("%d\n",c);
    }

    return 0;
}