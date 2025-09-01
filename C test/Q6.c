#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    int temp = num;
    int sum = 0;
    while(num!=0){
        sum = sum + num%10;
        num = num/10;
    }
    printf("%d is the sum of digit of %d",sum,temp);
    return 0;
}