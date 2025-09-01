#include <stdio.h>
int main(){

     int num;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    int i=num;
    while(i!=0){
       
        int digit=i%10;
        sum=sum+digit;
        i=i/10;
    }
    printf("sum of the digit %d",sum);
    
    return 0;
}