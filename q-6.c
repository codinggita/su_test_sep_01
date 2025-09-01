#include <stdio.h>

int main(){
    int input,temp;
    int digit=0;
    printf("input : ");
    scanf("%d", &input);
    int i=input;

    while (i > 0)
    {
        temp = i%10;
        i = i/10;
        digit=digit+temp;
    }
    printf("Sum of Digits = %d", digit);

    return 0;
}