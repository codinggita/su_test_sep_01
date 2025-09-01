
#include <stdio.h>

int main()
{
    float n1,n2,n3,n4,n5,avg=0;
scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);
scanf("%f",&n4);
scanf("%f",&n5);
avg=(n1+n2+n3+n4+n5)/5;
printf("Percentage %f \n",avg);
if(avg>=90)
{
    printf("Grade A+");
    
}
else if(avg>=80 && avg<90)
{
  printf("Grade A");
    
}
else if(avg>=70 && avg<80)
{
  printf("Grade B");
    
}
else if(avg>=60 && avg<70)
{
  printf("Grade C");
    
}
else if(avg>=50 && avg<60)
{
  printf("Grade D");
    
}
else if(avg>=40 && avg<50)
{
  printf("Grade E");
    
}
else
{
    printf("Fail");
}
return 0;
}