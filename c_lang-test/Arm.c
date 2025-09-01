#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int dig,calc = 0;
    int temp = num;
    while( temp > 0)
    {
        dig = temp % 10;
        calc = calc + (dig * dig * dig);
         temp = temp / 10;
    }
    if(num == calc)
    printf("%d is a Armstrong number.",num);
    else
    printf("%d is not a Armstrong number.",num);
}