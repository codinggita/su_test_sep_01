#include <stdio.h>

int main()
{
 
  int n, rev ,sum=0,cube;
  scanf("%d",&n);
  int i=n;
  
  while(i>0){
     rev=i%10;
     cube=rev*rev*rev;
      sum=sum+cube;
     
     i=i/10;
     
  }
   
 printf("%d",sum);
 
 if(sum=i){
     printf(" its a armstrong number");}
     
     
 else{
     printf(" its not a armstrongnumber");
 }
   

 

    return 0;
}
