#include <stdio.h>
int main () {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int temp=0;
    int sum=0;
    for (int i = n; i > 0; i=i/10)
    {
       temp=i%10;
       sum=sum+(temp*temp*temp);
    } if (n==sum)
    {
       printf("Armstrong number\n %d",sum);
    } else printf("Not a armstrong number \n%d",sum);
    
    
}