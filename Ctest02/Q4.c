#include <stdio.h>
int main()
{
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    int sum = 1 ;
    for(int i=1 ; i<=num ; i++){
        sum = sum*i;
    }
    printf("Factorial %d",sum);
    return 0;
}