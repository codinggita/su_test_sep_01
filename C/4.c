#include <stdio.h>
int main()
{
    int i;
    int fact=1;
    printf("Enter Integer=");
    scanf("%d",&i);

    for (int a=1;a<=i;a++)
    {
        fact=fact*a;
    }
    printf("factorial=%d",fact);


    return 0;
}