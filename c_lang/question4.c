#include<stdio.h.>
int main ()
{
   int result=1;
   int num;
   printf("Enter the number :");
   scanf("%d",&num);
   for(int i=1 ; i<=num; i++){
    result=result*i;
   }
   printf(" factorial :-  %d",result);
   
   
   
   
   
   
   
   
   
   
   
   
    return 0;
}