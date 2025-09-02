// Palindrome Number //
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    int original = num;
    int rev = 0;
    while(original>0){
        int digit = original%10;
        original /=10;
        rev = rev*10 + digit ;
    }
    if(rev == num){
        printf("PALINDROME NUMBER");
    }
    else{
        printf("NOT PALINDROME NUMBER");
    }
    return 0;
}