#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:-");
    scanf("%d",&num);
    int temp = num;
    int digit = 0;
    int rev = 0;
    while (temp!=0){
        digit = temp%10;
        rev = digit+rev*10;
        temp = temp/10;
    }
    if(rev==num){
        printf("%d is palendrome",num);
    }
    else{
        printf("%d is not palendrome",num);
    }
    return 0;
}
