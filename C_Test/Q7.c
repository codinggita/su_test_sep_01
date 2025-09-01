#include <stdio.h>
int main(){
    int num,a,sum=0;
    scanf("%d",&num);
    int temp = num;
    while (temp!=0){
        a=temp%10;
        sum=sum+(a*a*a);
        temp=temp/10;
    }
    if(sum==num){
        printf("Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }
    return 0;
}