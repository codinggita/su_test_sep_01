#include <stdio.h>
int mian(){
    int i = 1,sum=0,avg;
    do{
        int num;
        printf("Enter a number:");
        scanf("%d",&num);
        sum = sum + num;
        avg = sum / i;
        if(num == 0)
        {
             printf("%d is the avearge.",avg);
             break;
        }
        i++;
    }while(i > 0);

    return 0;
}