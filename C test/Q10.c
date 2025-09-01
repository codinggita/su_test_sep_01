#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:-");
    scanf("%d",&a);
    int check = a & (a-1);
    if(check==0){
        printf("%d is a power of 2",a);
    }
    else{
        printf("%d is not a power of two",a);
    }
    return 0;
}