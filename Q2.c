#include <stdio.h>
int main (){
    int units , bill;
    printf("Enter The Units Consumed : ");
    scanf("%d",&units);
    if(units>0 && units<=50){
        printf("Total Bill Is %d",(units*2)+100);
    }
    else if(units>50 && units <=100){
            printf("Total Bill Is %d\n",(units*3)+100);
        }
     else if(units>100 && units <=200){
            printf("Total Bill Is %d\n",(units*4)+100);
        } 
    else if(units>200 && units <=300){
            printf("Total Bill Is %d\n",(units*5)+100);
        }   
    else if(units>300 && units <=500){
            printf("Total Bill Is %d\n",(units*6)+100);
        }    
    else if (units>500)
    {
        printf("Total Bill Is %d\n",(units*8)+100);
    }
                 

}