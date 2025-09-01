
#include <stdio.h>
#include <math.h>
int main()
{
int n,d;
float result=0;
scanf("%d",&n);
int i=n;
while(i!=0)
{
    d=i%10;
    result=result+pow(d,i);
    i=i/10;
}
if((int)result==n)
printf("It is a Armstrong Number");
else
printf("It is a not Armstrong Number");
return 0;
}