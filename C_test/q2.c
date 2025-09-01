/*Write a C program that reads the number of electricity units consumed by a customer and calculates the total bill using the following slab system:*/

#include <stdio.h>

int main()
{
    int electricity_unit;
    printf("Enter electricity units consumed: ");
    scanf("%d",&electricity_unit);
    int bill=0;

    if(electricity_unit<=50){
        bill = electricity_unit * 2;
    }

    else if(electricity_unit<=100){
        bill = (50*2) + ((electricity_unit - 50)*3);
    }
    
    else if(electricity_unit<=200){
        bill = (50*2) + (50*3) + ((electricity_unit - 100)*4);
    }
    
    else if(electricity_unit<=300){
        bill = (50*2) + (50*3) + (100*4) + ((electricity_unit - 200)*5);
    }
    
    else if(electricity_unit<=500){
        bill = (50*2) + (50*3) + (100*4) + (200*5) + ((electricity_unit - 300)*6);
    }
    
    else{
        bill = (50*2) + (50*3) + (100*4) + (200*5) + (200*6) + ((electricity_unit - 500)*8);
    }

    int total_bill= bill + 100;

    printf("Your total bill is ₹%d", total_bill);
    return 0;
}