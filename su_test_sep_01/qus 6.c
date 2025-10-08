#include<stdio.h>

int main(){

int num;
    scanf("%d",&num);
    int num1=num;
    int num2;
    int sum=0;
    while(num1>0){
        num2=num1%10;
        sum=sum+num2;
        num1=num1/10;
    }
    printf("The sum of digits is:%d",sum);


return 0;
}