#include <stdio.h>
int main(){
  int num, end, rev=0, i;
  scanf("%d",&num);
  while(num>0){
  end=i%10;
  rev=rev*10+end;
  num=num/10;}
  if (i==rev){
    printf("palindrome");
  }
  else {
    printf("not a palindrome");
  }
    return 0;
}