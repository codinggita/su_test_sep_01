//Write a C program to check if a number is an Armstrong number.
//(Armstrong number = Sum of cubes of its digits is equal to the number itself).
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        int digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(temp==sum){
        printf("%d is an Armstrong number \n", temp);
    }
    else{
        printf("%d is not an Armstrong number \n", temp);
    }
    return 0;
}