#include <stdio.h>
int main () {
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int temp=num;
    int sum=0;
    int a=0;
    while (temp>0)
    {
      a=temp%10;
      sum=sum+a;
      temp=temp/10;
    } printf("Sum of digits %d",sum);
    
}