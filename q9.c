// 9. Repeated Input Until Zero(Do–While Loop)
//     Write a C program that keeps accepting numbers until the user enters 0. When 0 is entered,
//     display the sum and average of all entered numbers(excluding 0).

#include <stdio.h>

int main() {
    int num, sum = 0, count = 0, avg;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num != 0) {
            sum += num;
            count++;
        }
    } while (num != 0);
    if (count > 0) {
        avg = sum / count;
        printf("Sum: %d\nAverage: %d\n", sum, avg);
    } else {
        printf("No numbers were entered.\n");
    }
    return 0;
}
