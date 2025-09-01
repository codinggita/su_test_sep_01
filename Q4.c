#include<stdio.h>

int main()
{
    int num, sum=1;
    printf("Enter a number: ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        sum*=i;
    }
    printf("The Factorial of %d id %d.",num, sum);
    
    return 0;
}