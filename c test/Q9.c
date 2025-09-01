#include<stdio.h>

int main()

{
int num,sum=0;

do
{
printf("enter some number :");
scanf("%d",&num);

if(num==0)
{
    break;
}
sum=num+sum;


} while (num<100);

printf(" the sum of all num is %d",sum);

return 0;
}