#include <stdio.h>

int main()
{
    int sum=0;
    int num;
    int total_int=-1;
    do{
        
        scanf("%d",&num);
        sum = sum + num;
        total_int++;

    }while(num!=0);

    int average = (sum)/total_int;
    printf("Sum= %d\n",sum);
    printf("Avrage= %d\n",average);
    return 0;
}