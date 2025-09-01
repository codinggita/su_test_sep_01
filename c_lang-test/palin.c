#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    int dig,rev = 0;
    int temp = num;
    while( temp > 0)
    {
        dig = temp % 10;
        rev = rev * 10 + dig;
        temp = temp /10;
    }
    if(num == rev)
    printf("%d is a palindrome number.",num);
    else
    printf("%d is not a palindrome number.",num);

    return 0;
}