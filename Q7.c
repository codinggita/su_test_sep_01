#include<stdio.h>
int main (){
   int entered_digit;
    printf("Enter A Digit : ");
    scanf("%d",&entered_digit);
    int i = 1;
    int digit = 0;
int mul = 1;
int cube = 1;
int sum = 0;
    while (entered_digit != 0)
    {
        digit = entered_digit % 10;
        entered_digit = entered_digit/10;
        digit = digit * digit * digit;
        sum = digit + sum;
        i++;

    }
    if(entered_digit=sum){
        printf("Armstrong Number \n");
    }
    else{
        printf("Not Armstrong Number");
    }

    

}