#include <stdio.h>

int main(){
    int a;
    printf("Number : ");
    scanf("%d",&a);
    int b;
    int c=0;
    int d=a;
    while(d>0){
        b=d%10;
        c=c+b;
        d=d/10;
    }
    printf("Sum of Digits : %d",c);

    return 0;
}