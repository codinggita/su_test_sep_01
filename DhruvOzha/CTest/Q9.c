//Write a C program that keeps accepting numbers until the user enters 0.
//When 0 is entered, display the sum and average of all entered numbers (excluding 0).
#include<stdio.h>
int main(){
    int n;
    int sum=0;
    int count=0;
    printf("Enter a number (0 to exit): ");
    scanf("%d",&n);
    while(1){
        if(n==0){
            break;
        }
        sum=sum+n;
        count++;
    }

        printf("Sum: %d \n", sum);
    return 0;
}