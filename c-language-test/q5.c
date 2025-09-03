#include <stdio.h>

int main()
{
   int number;
   int reverse=0;
   int digit;
   scanf("%d",&number);
   while(number > 0){
       digit=number % 10;
       reverse=reverse * 10 + digit;
       number=number/10;
   }
  if(reverse == number){
      printf("palindrome");
  }
  else{
      printf("not palindrome");
  }
   
   
    return 0;
}