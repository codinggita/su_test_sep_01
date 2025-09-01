#include <stdio.h>
int main()
{

int a;
   int b;
     char c;
   scanf("%d",&a);
   scanf("%d",&b);
   
  
   scanf(" %c",&c);
   
   switch (c) {
       case '+' : printf("%d",a+b);
       break;
       case '-' : printf("%d",a-b);
       break;
       case '*' : printf("%d",a*b);
       break;
       case '/' : printf("%d",a/b);
       break;
       default : printf("enter valid operator.");
       break;
   }
   return 0;
}