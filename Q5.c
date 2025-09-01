#include<stdio.h>

int main()
{
    int num, sum=0, digit, original;
    printf("Enter a number: " );
    scanf("%d",&num);
    original=num;

    for ( ; num!=0 ; num=num/10)
    {
        digit = num%10;
        sum=(sum*10)+digit;
    }
    if (sum==original)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    
    return 0;
}