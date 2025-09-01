#include <stdio.h>
int main(){

    int num;
    int sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    int i=num;
    while(i!=0){
       
        int digit=i%10;
        sum=digit*digit*digit;
        i=i/10;
    }
    if(sum==num){
            printf("number is armstrong");
    }
     else{
            printf("number is not armstrong");
    }
    return 0;
}