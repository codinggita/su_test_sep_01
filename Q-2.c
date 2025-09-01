#include <stdio.h>
int main(){
float units;
    float bill=0;
    printf("enter the units:");
    scanf("%f",&units);
    if(units<=50 &&units>=0){
        bill=bill+(units*2);
    }
    else if(units<=100 && units>=51){
        bill=bill+((units-50)*3)+50*2;
    }
    else if(units<=200 && units>=101){
        bill=bill+((units-100)*4)+50*3+50*2;
    }
    else if(units<=300 && units>=201){
        bill=bill+((units-200)*5)+100*4+50*3+50*2;
    }
    else if(units<=500 && units>=301){
        bill=bill+((units-300)*6)+100*5+100*4+50*3+50*2;
    }
    else{
        bill=bill+((units-500)*8)+200*6+100*5+100*4+50*3+50*2;
    }printf(" total bill with additional 100 rupees = %f",bill+100);
    

    return 0;
}