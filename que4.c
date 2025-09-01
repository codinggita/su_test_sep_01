#include <stdio.h>

int main()
{ int number;
   int product=1;
   printf("enter the number of factor:");
   scanf("%d",&number);
   for(int i=1;i<=number;i++)
   {
       product=product*i;
   }
   
 printf(" %d ",product);
    return 0;
}
