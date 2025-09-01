#include <stdio.h>
int main()
{


int a,b,c,d,e;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);

float p = ((a+b+c+d+e)/500) *100;

if(p>=90 && p<=100){
    printf("Grade A+");
}
else if(p>=80 && p<90){
    printf("Grade A");
}
else if(p>=70 && p<80){
    printf("Grade B");
}
   else if(p>=60 && p<70){
       printf("Grade C");
   }
   else if(p>=50 && p<60){
       printf("Grade D");
   }
   else if(p>=40 && p<50){
       printf("Grade E");
   }
   else {
       printf("Fail");
   }
   return 0;
}