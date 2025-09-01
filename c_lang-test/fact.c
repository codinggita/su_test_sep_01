#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int pro = 1;
    for(int i = 1;i <= num ; i++)
    {
        pro = pro * i;
    }
    printf("Factorial of %d=%d",num,pro);
    return 0;
}