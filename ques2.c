#include<stdio.h>

int main()
{
    int units;
    printf("ENTER THE UNITS HERE : ");
    scanf("%d",&units);
    int price;
    int bill=1;
    
    if(units>=0 && units<=50)
    {
        price=2;
        bill=price*units+100;
        printf("THE TOTAL BILL IS : %d",bill);
    }
    else if(units>=51 && units<=100)
    {
        price=3;
        bill=price*units+100;
        printf("THE TOTAL BILL IS : %d",bill);
    }
    else if(units>=101 && units<=200)
    {
        price=4;
        bill=price*units+100;
        printf("THE TOTAL BILL IS : %d",bill);
    }
    else if(units>=201 && units<=300)
    {
        price=5;
        bill=price*units+100;
        printf("THE TOTAL BILL IS : %d",bill);
    }
    else if(units>=301 && units<=500)
    {
        price=6;
        bill=price*units+100;
        printf("THE TOTAL BILL IS : %d",bill);
    }
    else if(units>500)
    {
        price=8;
        bill=price*units+100;
        printf("THE TOTAL BILL IS : %d",bill);
    }
    
    

    return 0;
}