#include <stdio.h>
int main(){
    int unit,bill;
    scanf("%d",&unit);
    if (unit>=50 && unit<=50){
        bill= 100 + (unit*2);
    }
    else if (unit >=51 && unit<=100){
        bill= 100 + (50*2) + ((unit-50) *3);
    }
    else if (unit >=101 && unit<=200){
        bill= 100 + (50*2) + (50*3) +((unit-100) *4);
    }
    else if (unit >=201 && unit<=300){
        bill= 100 + (50*2) + (50*3)+ (50*4)+ ((unit-150) *5);
    }
    else if (unit >=301 && unit<=500){
        bill= 100 + (50*2) + (50*3)+ (50*4) + (50*5) +((unit-200) *6);
    }
    else {
        bill= 100 + (50*2) + (50*3)+ (50*4) + (50*5) + (50*6)+((unit-250) *8);
    }
printf("%d",bill);


    return 0;
}