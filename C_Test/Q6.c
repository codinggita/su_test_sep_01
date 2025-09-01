#include <stdio.h>
int main(){
    int num,a,sum=0;
    scanf("%d",&num);
    int temp = num;
    while (temp!=0){
        a=temp%10;
        sum=sum+a;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}