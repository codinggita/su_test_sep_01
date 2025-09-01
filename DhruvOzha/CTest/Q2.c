//Write a C program that reads the number of electricity units consumed by a customer and calculates the total bill using the following slab system:
// 0-50 units → ₹2 per unit
// 51-100 units → ₹3 per unit
// 101-200 units → ₹4 per unit
// 201-300 units → ₹5 per unit
// 301-500 units → ₹6 per unit

#include<stdio.h>
int main(){
    int unit;
    int bill=0;
    printf("Enter the number of units consumed: ");
    scanf("%d",&unit);
    if(unit<=50){
        bill=unit*2;
        printf("Total bill: %d \n", bill);
    }
    else if(unit>50 && unit<=100){
        bill=50*2 + (unit-50)*3;
        printf("Total bill: %d \n", bill);
    }
    else if(unit>100 && unit<=200){
        bill=50*2 + 50*3 + (unit-100)*4;
        printf("Total bill: %d \n", bill);
    }
    else if(unit>200 && unit<=300){
        bill=50*2 + 50*3 + 100*4 + (unit-200)*5;
        printf("Total bill: %d \n", bill);
    }
    else if(unit>300 && unit<=500){
        bill=50*2 + 50*3 + 100*4 + 100*5 + (unit-300)*6;
        printf("Total bill: %d \n", bill);
    }
    else if(unit>500){
        bill=50*2 + 50*3 + 100*4 + 100*5 + 200*6 + (unit-500)*8;
        printf("Total bill: %d \n", bill);
    }
    else{
        printf("Invalid input \n");
    }
    



    return 0;
}