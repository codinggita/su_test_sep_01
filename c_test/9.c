#include <stdio.h>
int main(){
    int num, n=0, sum=0;
    scanf("%d",&num);
    do{
        sum=sum+num;
        n=n+1;
        scanf("%d",&num);
    }while (num!=0);
    printf("%d is sum and %d is avg ", sum, sum/n);
    return 0;
}