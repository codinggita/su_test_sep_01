#include <stdio.h>

int main()
{  int a, b, c, d, e;
 printf("input your marks of 5 subjects;\n");
 scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
 
 int avg = (a+b+c+d+e)/5;
printf("Total percentage:%d\n %", avg);

if(avg>=90) {printf("Grade A+\n");}
else if(avg>=80) {printf("Grade A\n");}
else if(avg>=70) {printf("Grade B\n");}
else if(avg>=60) {printf("Grade C\n");}
else if(avg>=50) {printf("Grade D\n");}
else if(avg>=40) {printf("Grade E\n");}
else {printf("Fail\n");}


 
 
 
 
    return 0;
}