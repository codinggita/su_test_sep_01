#include <stdio.h>

int main(){

    int input;
    int sum=0;
    int avg;
    int i=0;
    
    
    do{
        i++;
        scanf("%d", &input);
        sum=sum+input;
        avg=sum/i;
        // avg=sum/(i-1);
        // i++;
    }while(input != 0);
    
    printf("sum : %d \n", sum);
    printf("avg : %d", avg);
    
    return 0;
}