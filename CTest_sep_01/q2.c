#include <stdio.h>

int main()
{
    int unit;
    printf("enter unit ");
    int bill= 0;
    scanf("%d",&unit);
    if(unit<51)
    bill =  100 +unit*2;
    else if (unit<101)
    bill =  100 +unit*3;
    else if(unit<201)
    bill = 100 + unit*4;
    else if(unit<301)
    bill = 100 + unit*5;
    else if(unit<501)
    bill = 100 + unit*6;
    else 
    bill =  100 + unit*8;
    printf(" total bill =%d",bill);
    return 0;
}