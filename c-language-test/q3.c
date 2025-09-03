#include <stdio.h>

int main()
{
   int subject1;
   int subject2;
   int subject3;
   int subject4;
   int subject5;
   int total;
   int number1;
   int percentage;
   scanf("%d",&subject1);
   scanf("%d",&subject2);    
   scanf("%d",&subject3);
   scanf("%d",&subject4);
   scanf("%d",&subject5);
   total=subject1+subject2+subject3+subject4+subject5;
   number1=total * 100;
   percentage=number1 / 500;
   printf("%d \n",percentage);
   if(percentage >= 90){
       printf("grade A+");
   }
   else if(percentage >=80){
       printf("grade A");
   }
   else if(percentage >=70){
       printf("grade B");
   }
   else if(percentage >=60){
       printf("grade C");
   }
   else if(percentage >=50){
       printf("grade D");
   }
   else if(percentage >=40){
       printf("grade E");
   }
   else{
       printf("fail");
   }
   
    return 0;
}