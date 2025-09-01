#include <stdio.h>

int main()
{
    int num, sum = 0, d;
    printf("enter the some number   ");
    scanf("%d", &num);

    while (num != 0)
    {
        d = num % 10;
        sum = d + sum;
        num /= 10;
    }

    printf("%d", sum);
    return 0;
}