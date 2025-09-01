#include <stdio.h>
int main()
{
    int num;
    int sum=0;
    int avg=1;
    int i=num;
 printf("Enter a number: ");
  do{  
 scanf("%d",&num);
 sum = sum+i;
 avg = sum/i;
 i++;
 break;
  }while (num==0);
  printf("%d",sum);
 printf("%d",avg);
 
}