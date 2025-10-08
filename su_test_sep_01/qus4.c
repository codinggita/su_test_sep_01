#include<stdio.h>

int main(){

    int num;
    scanf("%d",&num);
    int sum=1;
    for(int a=1;a<=num;a++){

        sum=sum*a;
    }
    printf("%d",sum);


      return 0;
}