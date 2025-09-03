#include <stdio.h>

int main() {
    int number, count = 0;
    int sum = 0;
    double average;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);

        if (number != 0) {
            sum += number;
            count++;
        }

    } while (number != 0);

    if (count > 0) {
        average = (double)sum / count;
        printf("\nSum = %d\n", sum);
        printf("Average = %.2lf\n", average);
    } else {
        printf("\nNo numbers were entered.\n");
    }

    return 0;
}
