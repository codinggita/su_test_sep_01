#include <stdio.h>
      int main(){

      
      int num,sum,digit;
      num=121;
      sum=0;
      printf(" sum of digits:");
      while(num>0){
          digit =num %10;
          sum=sum+digit;
          num=num/10;
      }printf("%d\n",sum);
       return 0;
    }