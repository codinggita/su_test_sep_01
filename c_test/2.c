#include <stdio.h>
int main(){
    printf("enter electricity units consumed by a customer: ");
    int units, bill;
    scanf("%d",&units);
    if (units<=50){
        bill=2*units;
    }
    else if (units <=100){
        bill = 3*units - 50;
    }
    else if (units<=200){
        bill= 4*units-150;
    }
    else if (units<=300){
        bill= 5*units-350;
    }
    else if (units<=500){
        bill= 6*units-650;
    }
    else{
        bill=8*units-1650;
    }
    bill = bill+100;  //fixed charge = 100;

    printf("%d",bill);
    return 0;
}
