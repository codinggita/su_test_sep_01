#include <stdio.h>
int main(){
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    int sum=0;
    int lastdigit=0;
    while(num!=0){
        lastdigit=num%10;
        sum=sum+lastdigit;
        num=num/10;
    }
    printf("Sum of digit of number is:%d",sum)
    return 0;
}