#include<stdio.h>
int main(){

    int num;
    scanf("%d",&num);

    int sum;
    int digit;

    int i=num;
    while (num!=0){
        i=num/10;
        digit=num%10;
        sum=sum+digit;
    }


}