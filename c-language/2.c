#include<stdio.h>
int main(){
    int unit;
    printf("enter the value of unit= ");
    scanf("%d",&unit);
    int sum=unit * 2 +(100);
    int sum1=unit * 3 +(100);
    int sum2=unit * 4 +(100);
    int sum3=unit * 5 +(100);
    int sum4=unit * 6 +(100);
    int sum5=unit * 8 +(100);

    if(unit>=0 && unit<=50){ 
        printf("%d", sum);
    }
    else if(unit>=51 && unit<=100)
    {
        printf("%d", sum1);
    }
    else if (unit>=101 && unit<=200)
    {
        printf("%d", sum2);
    }
    else if(unit>=201 && unit<=300)
    {
        printf("%d", sum3);
    }
    else if (unit>=301 && unit<=500)
    {
        printf("%d", sum4);
    }
    else{
        printf("%d", sum5);
    }

    return 0;
}