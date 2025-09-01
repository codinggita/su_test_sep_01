#include <stdio.h>

int main()
{
    int sum=0;
    int num;
    int total=-1;
    do{
        
        scanf("%d",&num);
        sum = sum + num;
        total++;

    }while(num!=0);

    int average = (sum)/total;
    printf("Sum= %d\n",sum);
    printf("Avrage= %d\n",average);
    return 0;
}