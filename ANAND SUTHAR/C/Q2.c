#include<stdio.h>
int main(){
    int units;
    printf("Enter number of electricity units that consumed :");
    scanf("%d",&units);

    if(units>=0 && units<=50){
        printf("₹2 per unit");
    }
         if(units>=51 && units<=100){
            printf("Total Bill = ₹%d",units*3+100);
         }
         if(units>=101 && units<=200){
            printf("Total Bill = ₹%d",units*4+100);
         }
         if(units>=201 && units<=300){
            printf("Total Bill = ₹%d",units*5+100);
         }
         if(units>=301 && units<=500){
            printf("Total Bill = ₹%d",units*6+100);
         }
         if(units>500){
            printf("Total Bill = ₹%d",units*8+100);   
         }
    return 0;
}