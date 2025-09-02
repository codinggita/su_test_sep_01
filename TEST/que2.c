#include <stdio.h>
int main(){
    int units;
    printf("Enter the Units :");
    scanf("%d",&units);
    int multi ;
    int addition ;

    if(units>=0 && units<=50){
        multi = units*2;
    }
    else if(units>=51 && units<=100){
        multi = units*3;
    }
    else if(units>=101 && units<=200){
         multi = units*4;
    }
    else if(units>=201 && units<=300){
        multi = units*5;
    }
    else if(units>=301 && units<=500){
        multi =units*6;
    }
    else{
        multi =units*8;
    }

    addition = multi +100;
    printf("TOTAL BILL : %d",addition);
    return 0;
}