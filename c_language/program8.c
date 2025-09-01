
#include <stdio.h>

int main()
{    
int n1,n2,result;
int ch;
do
{
 scanf("%d",&n1);
 scanf("%d",&n2);
 printf("1)Addition\n");
 printf("2)Subtraction\n");
 printf("3)Multiplication\n");
 printf("4)Division\n");
 printf("5)Exit\n");
 printf("Enter your choice--");
 scanf("%d", &ch);

switch(ch)
{
    case 1:
    {
    result=n1+n2;
    printf("SUM = %d",result);
    break;
    }
    case 2:
    {
    result=n1-n2;
    printf("MINUS= %d",result);
    break;
    }
    case 3:
    {
    result=n1*n2;
    printf("PRODUCT= %d",result);
    break;
    }
    case 4:
    if(n2!=0)
    {
    result=n1/n2;
    printf("DIVISION= %d",result);
    }
    else
    printf("Division by zero ERROR!!!");
    break;
    default:
    printf("INVALID INPUT");
}
}
while (ch!= 5);
return 0;
}