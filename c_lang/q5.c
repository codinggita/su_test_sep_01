#include <stdio.h>
int main(){
  int a, digit,upd;
  printf("Enter the value you want to check");
  scanf("%d",&a);
  int d=0;
  while(a!=0){
    digit= a%10;
    upd= a/10;
    printf("%d",digit);
      digit;
    a=upd;
    d = d*10 +digit;
  
  }
      // printf("%d",digit);
    if(a==d){
        printf("Palidrone");
    }
    else {
      printf("Not a Palidrone");
    }
  
    return 0;
}