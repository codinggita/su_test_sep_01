
#include <stdio.h>

int main()
{
    int n,d,sum=0;
scanf("%d",&n);
int i=n;
while(i!=0)
{
    d=i%10;
    sum=sum+d;
    i=i/10;
}

printf("SUM OF DIGIT = %d",sum);
return 0;
}
