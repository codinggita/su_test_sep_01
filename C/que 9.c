#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    int count = 0;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        sum += number;
        count++;
    }

    if (count == 0) {
        printf("No numbers entered.\n");
    } else {
        float average = (float)sum / count;
        printf("Sum = %d, Average = %.2f\n", sum, average);
    }

    return 0;
}
