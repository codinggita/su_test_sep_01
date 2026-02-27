#include <stdio.h>
int main(){
    int num, b,res=0;
    scanf("%d",&num);
    for (int i=num; i>0; i=i/10){
        b=i%10;
        res=res+(b*b*b);
    }
    if (res==num){
        printf("Armstrong number");
    }
    else{
        printf("not an armstrong number");
    }
    return 0;
}