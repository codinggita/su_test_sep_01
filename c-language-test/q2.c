#include <stdio.h>

int main()
{
   int units;
   int bill;
   scanf("%d",&units);
   if(units>=0 && units<=50){
   bill=units*2;
   printf("bill is %d",bill);}
   else if(units>=51 && units<=100){
   bill=units*2 + (units-50)*3;
   printf("bill is %d",bill);}
   else if(units>=101 && units<=200){
   bill=units*2 + (units-50)*3 + (units-100)*4;
   printf("bill is %d",bill);}
   else if(units>=201 && units<=300){
   bill=units*2 + (units-50)*3 + (units-100)*4 + (units-200)*5;
   printf("bill is %d",bill);}
   else if(units>=301 && units<=500){
   bill=units*2 + (units-50)*3 + (units-100)*4 + (units-200)*5 + (units-300)*6;
   printf("bill is %d",bill);}
   else{
   bill=units*2 + (units-50)*3 + (units-100)*4 + (units-200)*5 + (units-300)*6 + (units-500)*8;
   printf("bill is %d",bill+100);}
       
   

    return 0;
}