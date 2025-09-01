#include <stdio.h>
int main(){
    int a;
    int sum=0, digit, upd ;
    scanf("%d",&a);
    while(a!=0){
        digit=a%10;
        upd=a/10;
         sum = digit*digit*digit +sum;
        a=upd;
    
     if(sum==a){
        printf("%d Armstrong",a);
     }
     else{
        printf("not a Armstrong");
     }
    }
    return 0;
}