#include <stdio.h>

int main()

{
    int num, fac = 1;
    printf("enter the some number   ");
    scanf("%d", &num);

    for (int a = 1; a <= num; a++)
    {
        fac = fac * a;
    }
    printf("the Factorial of a Number is %d", fac);


    return 0;
}