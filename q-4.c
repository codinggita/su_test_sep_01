#include <stdio.h>

int main(){

    int input,factorial,i;
    factorial=1;
    printf("input : ");
    scanf("%d", &input);

    for (i=1; i<=input; i++)
    {
        factorial = factorial*i;
    }
    printf("factorial : %d", factorial);
    
    return 0;
}