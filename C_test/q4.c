#include <stdio.h>
int main ()
{

       int i=1,num,c=1; 
  
  
    scanf("%d",&num);  
   
    for(i=1;i<=num;i++){
      
       
      c=c*i;
    }
     printf("Factorial = %d\n",c);
     return 0;
}