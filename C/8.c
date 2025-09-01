#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d\n",&a);
    scanf("%d %d",&b, &c);

    do
    {
        if(a=1)
        {
            printf("%d",b+c);
            break;
        }

         else if(a=2)
        {
            printf("%d",b-c);
            break;
        }

        else if(a=3)
        {
            printf("%d",b*c);
            break;
        }

        else if(a=4)
        {
            printf("%d",b/c);
            break;
        }
        
    }
    while(a!=5);

    return 0;
}