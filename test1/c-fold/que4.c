#include <stdio.h>
int main () {
    int f,sum=1;
    printf("Enter a number \n");
    scanf("%d",&f);
    for (int i = 1; i <= f; i++)
    {
     sum=sum*i;
    } printf("Factorial = %d",sum);
    
}