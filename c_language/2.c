#include <stdio.h>
int main(){
    int num; 
    printf("Enter the number of electricity unit : ");
    scanf("%d",&num);

    if(num>=0 && num<=50){
        printf("Your electricity bill is : %d",num*2);}

        if(num>=51 && num<=100){
             printf("Your electricity bill is : %d",num*3);}

            else if(num>=101 && num<=200){
                printf("Your electricity bill is : %d",num*4);}

                  else if(num>=201 && num<=300){
                printf("Your electricity bill is : %d",num*5);}

                  else if(num>=301 && num<=500){
                printf("Your electricity bill is : %d",num*6);}

                  else if(num>500){
                printf("Your electricity bill is : %d",num*8+100);}

    return 0;
}