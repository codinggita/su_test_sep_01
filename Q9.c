// Write a C program that keeps accepting numbers until the user enters 0.
// When 0 is entered, display the sum and average of all entered numbers (excluding 0).

#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;

    printf("Enter numbers (0 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == 0)
            break;

        sum += number;
        count++;
    }

    if (count == 0) {
        printf("No numbers were entered.\n");
    } else {
        float average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}
