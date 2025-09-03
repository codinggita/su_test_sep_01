#include <stdio.h>
int main() {
    int b,bill=100;
    printf("Enter units\n");
    scanf("%d",&b);
    if (b>=0 && b<=50)
    {
       bill=bill+b*2;
    } else if (b>=51 && b<=100)
    {
       bill=bill+(50*2) + (b-50)*3;
    } else if (b>=102 && b<=200)
    {
       bill=bill+(50*2)+(50*3)+(b-100)*4;
    }else if (b>=201 && b<=300)
    {
        bill=bill+(50*2) + (50*3) + (100*4) + (b-200)*5;
    } else if (b>=301 && b<=500)
    {
      bill=bill+(50*2) + (50*3) + (100*4) + (200*5) + (b-300)*6;
    } else {
        bill=bill+(50*2) + (50*3) + (100*4) + (200*5) + (300*6) + (b-500)*8;
    }
    printf("%d",bill);
    
    
    
    
}