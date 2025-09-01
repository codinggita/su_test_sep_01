// 7. Armstrong Number(While Loop)
//     Write a C program to check if a number is an Armstrong number.(Armstrong number = Sum of cubes of its digits is equal to the number itself)

#include <stdio.h> 

int main() {
    int num, rem, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0) {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    if (temp == sum) {
        printf("%d is an Armstrong number.\n", temp);
    } else {
        printf("%d is not an Armstrong number.\n", temp);
    }
    return 0;
}