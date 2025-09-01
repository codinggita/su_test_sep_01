#include <stdio.h>
int main (){
int num;
 scanf("%d",&num);
  
  int result=1;
  for(int a=1;a<=num;a=a+1){
  result=result*a;
}
  
  printf("%d",result);

    return 0;
}