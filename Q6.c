#include <stdio.h>

int main() {
    int number,digit,sum=0;
    scanf("%d",&number);

    if(number<0){
        number= -number;
    }

    while(number>0){
        digit=number %10;
        sum=sum+digit;
        number=number/10;
    }

    printf("%d",sum);

    return 0;
}