//Write a C program to accept a number, reverse it using while loop, and check if it is a palindrome.
#include<stdio.h>
int main(){
    int n;
    int rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("Reversed number is %d \n", rev);
    if(temp==rev){
        printf("%d is a palindrome \n", temp);
    }
    else{
        printf("%d is not a palindrome \n", temp);
    }
    return 0;
}