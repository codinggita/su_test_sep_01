#include <stdio.h>

int main()
{
  int i=0,rem,rev;
  printf("\n\t enter your number:");
  scanf("%d",&i);
  while(i!=0)
  {
      rem=i%10;
      rev=rev*10+rem;
      i/=10;
  }
 
  if(i=rev)
  {
      printf("\n\t polindrom number");
  }
  else
  {
      printf("\n\t not a pollindrom number");
  }

   

   
   
  
    return 0;
}
