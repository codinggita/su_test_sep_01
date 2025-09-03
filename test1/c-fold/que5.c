#include <stdio.h>
int main () {
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    int i;
    int temp=num;
    int rev=0;
    int a=0;
    while (temp>0)
    {
      a= temp%10;
       rev=rev*10+a;
         temp=temp/10;
    } if (temp==num)
    {
  printf("Palindrome %d = %d",num,rev);
    } else printf("Not a palindrome %d != %d",num,rev);
    
}