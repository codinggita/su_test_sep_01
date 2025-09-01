#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int upd, sum=0,digit;
    while(a!=0){
        digit= a%10;
        upd =a/10;
        a=upd;
        sum = sum+digit;
     
    } 
       printf("%d",sum);
    return 0;
}