#include<stdio.h>
int main()
{
    int no;
    int count = 0;
    int sum = 0;
    int average = 0;
    do{
        int num;
        printf("Enter a number:-");
        scanf("%d",&num);
        if(num!=0){
            sum = sum + num;
        }
        else{
            break;
        }
        no = num;
        count++;
    }while(no!=0);
    average = sum/count;
    printf("The sum of all the numebrs is %d\n",sum);
    printf("The average is %d",average);
    return 0;
}