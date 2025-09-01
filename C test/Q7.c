#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    int temp = num;
    int digit = 0;
    int sum = 0;
    while (temp!=0){
        digit = temp%10;
        sum = sum+digit*digit*digit;
        temp = temp/10;
    }
    if(num==sum){
        printf("Armstrong Number");
    }
    else{
        printf("Not a Armstrong number");
    }
    return 0;
}