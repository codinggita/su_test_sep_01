#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float avg;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        if (num != 0) {   // exclude 0
            sum += num;
            count++;
        }

    } while (num != 0);

    if (count > 0) {
        avg = (float)sum / count;
        printf("\nSum = %d", sum);
        printf("\nAverage = %.2f\n", avg);
    } else {
        printf("\nNo numbers entered.\n");
    }

    return 0;
}
