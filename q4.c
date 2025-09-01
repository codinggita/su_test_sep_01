// 4. Factorial of a Number (For Loop)
// Write a C program to calculate the factorial of a given number using for loop.


#include <stdio.h>
int main () {
    int n,i,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",n,fact);
    return 0;
    
}
