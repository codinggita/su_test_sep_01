#include <stdio.h>
int main () {
    int n,sum=0;
    printf("Keep ENTERing number till you enter 0\n");
   do
   {
    scanf("%d",&n);
    sum=sum+n;
   } while (n!=0);
   printf("Sum= %d",sum);
    
}