#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int dig,sum = 0;
    int temp = num;
    while(temp > 0)
    {
         dig = temp % 10;
         sum = sum + dig;
         temp = temp/10;
    }
    printf("Sum of the digits of the number:%d",sum);

    return 0;
    
}