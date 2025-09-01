#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum;
    int i= num;
    while(i>0){
        sum = sum + ((i%10)*(i%10)*(i%10)); 
        i = i/10;
    }
    if(sum==num){
        printf("Armstrong number");
    }
    else{
        printf("Not Armstrong number");
    }
    return 0;
}