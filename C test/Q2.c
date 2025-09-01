#include<stdio.h>
int main()
{
    int units;
    int bill = 0;
    printf("Enter the electricity units consumed:-");
    scanf("%d",&units);
    if(units<=50){
        int bill = units*2;
        printf("Your bill is %d",bill+100);
    }
    else if(units<=100){
        int bill = ((units-50)*3)+100;
        printf("Your bill is %d",bill+100);
    }
    else if(units<=200){
        int bill = ((units-100)*4)+250;
        printf("Your bill is %d",bill+100);
    }
    else if(units<=300){
        int bill = ((units-200)*5)+650;
        printf("Your bill is %d",bill+100);
    }
    else if (units<=500){
        int bill = ((units-300)*6)+1150;
        printf("Your bill is %d",bill+100);
    }
    else{
        int bill = ((units-500)*8)+1150;
        printf("Your bill is %d",bill+100);
    }
    return 0;
}