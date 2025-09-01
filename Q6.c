#include<stdio.h>
int main (){
    int n;
    printf("Enter A Digit To Get Its Sum : ");
    scanf("%d",&n);
    int i = 1;
    int digit = 0;
    int sum = 0;
    while(n != 0){
    digit = n % 10;
    sum = digit + sum;
    n = n/10;
    i++;
    }
    printf("%d\n",sum);
}