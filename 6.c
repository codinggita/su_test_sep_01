#include <stdio.h>

int main()
{
  int n, rev ,sum=0; ;
  scanf("%d",&n);
  int i=n;
  
  while(i>0){
     rev=i%10;
     i=i/10;
      sum=sum+rev;
  }
   
 printf("the sum of digit is %d",sum);
   

    return 0;
}