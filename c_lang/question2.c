#include<stdio.h>
int main()
{ 
    int  units , bill;
    printf("Enter the unit :-");
    scanf("%d",& units);
if(units>0 && units<=50){
    bill=2*units+100;
printf("RS %d",bill);
}
   else if(units>=51 && units<=100){
        bill=3*units+100;
        printf(" RS %d",bill);
        }
    
    else if(units>=101 && units<=200){
        bill=4*units+100;
        printf("RS %d",bill);
    }
    else if(units>=201 && units<=300){
        bill=5*units+100;
        printf("RS %d",bill);
    }
    else if(units>=301 && units<=500){
        bill=6*units+100;
        printf("RS %d",bill);
    }
    else if(units>500){
        bill=8*units+100;
        printf("RS %d",bill);
    }
    
    
    else {
        printf("invalid input");
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}