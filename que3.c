#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d ",&a, &b, &c, &d);
    int x=a+b+c+d;
    printf("total: %d \n",x);
    int y=x/4;
    printf("percentage: %d \n",y);
    printf("%d",y);
    
    if(a>=90)
    {
        printf("A+");
        
    if (a>=80)
    {
        printf("A");
    if (a>=70)
    {
        printf("B");
    
    if (a>=60)
    {
        printf("C");
    
    if (a>=50)
    {
        printf("D");
    
    if (a>=40)
    {
        printf("E");
    }
    }
    }
    }
    }
    }
    else
    {
        printf("fail");
    }
    
    
    return 0;
}
