#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int factorial= 1;

    for(int i=1; i<=num; i++){
        factorial = factorial*i;
    }
    printf(" Factorial = %d",factorial);
    return 0;
}