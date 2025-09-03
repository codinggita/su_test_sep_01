
#include <stdio.h>

int main()
{ int num,fac,i;
  scanf("%d",&num);
  fac = 1;
  for(int i=1; i<=num; i++){
    fac = fac*i; 
  }
  printf("%d",fac);
    return 0;
}
