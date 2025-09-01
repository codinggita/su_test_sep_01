//Write a C program to calculate the factorial of a given number using for loop.
#include<stdio.h>
int main(){
    int n;
    int fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial is %d \n", fact);
    return 0;
}