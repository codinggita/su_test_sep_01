#include <stdio.h>

int main()
{
   int number;
   int factorial;
   scanf("%d",&number);
   factorial = 1;
   for(int i=1;i<=number;i++)
   factorial=factorial * i;
   printf("%d",factorial);
   
   
    return 0;
}