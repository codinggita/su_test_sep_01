#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if ((n & (n-1))==0)
    {
        printf("Power of 2");
    }
    else
    {
        printf("Not Power of 2");
    }
    
    return 0;
}