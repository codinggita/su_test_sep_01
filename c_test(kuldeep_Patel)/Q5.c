
#include <stdio.h>

int main()
{ int num,reverse = 0,dig;
  scanf("%d",&num);
  int i =num;
  while(i > 0){
      dig = i%10;
      reverse = reverse*10 + dig;
      i /= 10;
  }
if(reverse == num){
    printf("Palindrome number");
}
else{
    printf("Not Palindrome Number");
}
    return 0;
}
