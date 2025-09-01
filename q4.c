#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int factorial=1;
    for(int a=1;a<=num;a++){
        factorial=factorial*a;
    }
    printf("Factorial is:%d",factorial);
    return 0;
}