#include <stdio.h>

int main()
{
  int n,rev;
  scanf("%d",&n);
  int i=n;
  while(i>0){
     rev=i%10;
     i=i/10;
      printf("%d",rev);
  }
   
  if(i=rev){
      printf(" its a palindrome number");
  }
  else{
      printf("its not a palindrome number");
  }
   
   
    return 0;
}
