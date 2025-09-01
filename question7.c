#include <stdio.h>
int main()
{

int num, i, j;
     int result = 0;

     scanf("%d", &num);
     i = num;

     while (num > 0) {
         j = num % 10;         
         result += j * j * j; 
         num = num / 10;               
     }
    
     if (result == i) {
         printf("%d is an armstrong number\n", i);
     } else {
         printf("%d is not an armstrong number\n",i);}

         return 0;
     }


     
