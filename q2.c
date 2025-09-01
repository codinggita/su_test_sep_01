#include <stdio.h>
int main()
{
    int electricityUnits;
    scanf("%d",&electricityUnits);
    int Bill;
    int TotalBill;
    if(electricityUnits>=0&&electricityUnits<=50){
        int Bill=electricityUnits*2;
        int TotalBill=Bill+100;
        printf("Total bill is:%d",TotalBill);
    }
    else if(electricityUnits>=51&&electricityUnits<=100){
        int Bill=electricityUnits*3;
        int TotalBill=Bill+100;
        printf("Total bill is:%d",TotalBill);
    }
    else if(electricityUnits>=101&&electricityUnits<=200){
        int Bill=electricityUnits*4;
        int TotalBill=Bill+100;
        printf("Total bill is:%d",TotalBill);
    }
    else if(electricityUnits>=201&&electricityUnits<=300){
        int Bill=electricityUnits*5;
        int TotalBill=Bill+100;
        printf("Total bill is:%d",TotalBill);
    }
    else if(electricityUnits>=301&&electricityUnits<=500){
        int Bill=electricityUnits*6;
        int TotalBill=Bill+100;
        printf("Total bill is:%d",TotalBill);
    }
        else{
            int Bill=electricityUnits*8;
            int TotalBill=Bill+100;
            printf("Total bill is:%d",TotalBill);
        }
    
    return 0;
}