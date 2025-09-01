#include <stdio.h>
int main() {
    int num;
    int originalnumber; 
    int digit;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalnumber = num;  

    while (num > 0) {
        digit = num % 10;     
        sum = sum + digit * digit * digit; 
        num = num / 10; 
    }
    if (sum == originalnumber) {
        printf("Armstrong Number \n");
    } else {
        printf("Not Armstrong Number\n");
    }
    return 0;
}