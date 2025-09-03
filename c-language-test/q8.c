#include <stdio.h>

int main()
{
   int oper;
   int number1;
   int number2;
   int result;
   do{printf("enter 1 to perform addition");
   printf("enter 2 to perform subtraction");
   printf("enter 3 to perform multipilcation");
   printf("enter 4 to perform division");
  scanf("%d",&oper);
  scanf("%d",&number1);
  scanf("%d",&number2);
  
  if(oper == 1){
      result = number1 + number2;
  }
  else if(oper == 2){
      result = number1 - number2;
  }
  else if(oper == 3){
      result = number1 * number2;
  }
  else if(oper == 4){
      result = number1 * number2;
  }
  else{
      printf("enter valid number");
  }
 printf("%d is result \n",result);}
  while(oper !=0);
  
  
  
  
    return 0;
}