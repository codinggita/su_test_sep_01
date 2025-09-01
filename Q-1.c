#include <stdio.h>
int main(){
   int num;
   printf("enter the character:");
   scanf("%d",&num);
   if(num<=90 && num>=65 || num<=122 && num>=97){
    printf("Char is from A-Z or a-z");
   }
   else if(num>=48 && num<=57){
    printf("Char is from 0-9");
   }
   else{
    printf("Char is special symbol");
   }








   return 0; 
}