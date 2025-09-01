#include <stdio.h>

int main(){
    int input,temp;
    int digit=0;
    int cube;
    printf("input : ");
    scanf("%d", &input);
    int i=input;

    while (i > 0)
    {
        temp = i%10;
        i = i/10;
        cube=temp*temp*temp;
        digit=digit+cube;
    }


    if (digit == input)
    {
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
    

    return 0;
}