
#include <stdio.h>

 int main() {
 
    char in;
printf("press any key to enter");
scanf("%c", &in);
    do{
    char op;
    printf("enter opration(+,-,*,/ or exit)");
    scanf("%c", &op);

    float num1,num2;
    printf("\nenter value for num1=");
    scanf("%f", &num1 );
     
    printf("\nenter value for num2=");
    scanf("%f", &num2);
   
   
   if (op=='+')
   {
       printf ("%f",num1,num2);
}
else if (op=='-')
{
       printf ("%f",num1-num2);
}
else if (op=='*')
{
       printf ("%f",num1*num2);
}
else if (op=='/')
{
       printf ("%f",num1/num2);
}
   else {
    printf("invalid opration");
   }  
   }
   while(in==1)
    return 0;
}