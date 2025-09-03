
#include <stdio.h>

int main()
{ int num,sum =0,dig;
  scanf("%d",&num);
  int i = num;
  
  while(i>0){
      dig = i%10;
      sum += dig;
      i /= 10;
  }
  printf("%d",sum);
    return 0;
}
