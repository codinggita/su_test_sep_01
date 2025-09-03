
#include <stdio.h>
#include <math.h>
int main()
{ int num1,num2,oper,res;
  do{ printf("for exit type 0\n");
      printf("for add type 1\n");
      printf("for sub type 2\n");
      printf("for mul type 3\n");
      printf("for div type 4\n");
      scanf("%d",&oper);
      scanf("%d",&num1);
      scanf("%d",&num2);
      if(oper == 1){
         res = num1 + num2;
      }
      else if(oper == 2){
         res = num1 - num2;
      }
      else if(oper == 3){
         res = num1 * num2;
      }
      else if(oper == 4){
        res =  num1 / num2;
      }
      else if(oper == 0){
          break;
      }
      else{
          printf("please choose correct operation\n");
      }
      printf("result => %d\n",res);
      num1 = 0;
      num2 = 0;
  }while(oper != 0);
    return 0;
}
