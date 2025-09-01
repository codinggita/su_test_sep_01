#include <stdio.h>

int main()
{
  
  char ch;
  printf("enter a single character:");
  scanf("%c",&ch);
   
   
  if(('A'>=ch && ch<='Z') || ('a'>=ch && ch<='z')){
      printf("it is alphabet\n");
      }
   
   
   
  else if(0>=ch && ch<=9){
      printf("it is a digit\n ");
  }
   
  else{
      printf("it is special symbol\n");
  }
   
   return 0;
   
}