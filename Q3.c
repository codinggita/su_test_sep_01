#include<stdio.h>
int main (){
    int a,b,c,d,e;
    printf("Enter Marks Subject-Wise : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int avg = (a+b+c+d+e)/5;
    if (avg>=90)
    {
        printf("A+\n");
    }
   else if (avg>=80)
    {
        printf("A\n");
    }
   else if (avg>=70)
    {
        printf("B\n");
    }
    else if (avg>=60)
    {
        printf("C\n");
    }
else if (avg>=50)
    {
        printf("D\n");
    }
    else if (avg>=40)
    {
        printf("E\n");
    }
    if (avg<40)
    {
        printf("FAIL\n");
    }
}