#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum_of_digit;
    int i= num;
    while(i>0){
        sum_of_digit = sum_of_digit + (i%10); 
        i = i/10;
    }
    printf("%d",sum_of_digit);
    return 0;
}