// Write a C program that keeps accepting numbers until the user enters 0.
//  When 0 is entered, display the sum and average of all entered numbers (excluding 0).
// Sample Input/Output
// Input: 5 10 15 0
// Output: Sum = 30, Average = 10
#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float avg;

    printf("Enter numbers (0 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;  // stop when user enters 0
        }

        sum = sum + num;
        count++;
    }

    if (count > 0) {
        avg = (float)sum / count;
        printf("Sum = %d, Average = %.2f\n", sum, avg);
    } else {
        printf("No numbers entered.\n");
    }

    return 0;
}

