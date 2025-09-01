#include <stdio.h>

int main()
{ int j;
scanf("%d",&j);
  char str[]="987";
  
  int a=0;
  int b=0;
  
  while(a<=2){
      b=str[a]+b;
      a=a+1;
  }
  printf("%d",b);
  
  
  
  
  
  
    return 0;
}
