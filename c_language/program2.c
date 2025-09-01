
#include <stdio.h>

int main()
{
    int units,bill=0;
scanf("%d",&units);
if(units>=0 && units<=50)
{
    bill=100+(units*2);
    printf("Total bill= %d",bill);
    
}
else if(units>=51 && units<=100)
{
    bill=100+(50*2)+((units-50)*3);
    printf("Total bill= %d",bill);
    
}
else if(units>=101 && units<=200)
{
    bill=100+(50*2)+(50*3)+((units-100)*4);
    printf("Total bill= %d",bill);
  
}
else if(units>=201 && units<=300)
{
    bill=100+(50*2)+(50*3)+(100*4)+((units-200)*5);
    printf("Total bill= %d",bill);
   
}
else if(units>=301 && units<=500)
{
    bill=100+(50*2)+(50*3)+(100*4)+(100*5)+((units-300)*6);
    printf("Total bill= %d",bill);
 
}
else
{
    bill=100+(50*2)+(50*3)+(100*4)+(100*5)+(200*6)+((units-300)*8);
    printf("Total bill= %d",bill);
}
return 0;
}