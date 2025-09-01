#include <stdio.h>
int main(){
    int num,a,rev=0;
    scanf("%d",&num);
    int temp = num;
    while (temp!=0){
        a=temp%10;
        rev=rev*10+a;
        temp=temp/10;
    }
    if (rev==num){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}