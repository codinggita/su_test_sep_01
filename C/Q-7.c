#include <stdio.h>

int main() {
    int num,armstrong, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    armstrong= num; 

    while (num != 0) {
        digit = num % 10;           
        sum += digit * digit * digit; 
        num /= 10;               
    }

    if (sum == armstrong)
        printf("%d is an Armstrong number.\n", armstrong);
    else
        printf("%d is not an Armstrong number.\n", armstrong);

    return 0;
}