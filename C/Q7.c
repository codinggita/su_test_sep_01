#include <stdio.h>

int main(){
    int a;
    printf("Number : ");
    scanf("%d",&a);
    int b,e;
    int c=0;
    int d=a;
    while(d>0){
        b=d%10;
        e=b*b*b;
        c=c+e;
        d=d/10;
    }
    if(a==c){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }

    return 0;
}