// Sum of Digit loop //
#include <stdio.h>
int main(){
    int num;
    printf("Enter the Number :");
    scanf("%d",&num);

    int i = num;
    int sum = 0;
    while(i>0){
        int digit = i%10;
        sum = sum + digit ;
        i = i/10;
    }printf("%d",sum);
    return 0;
}