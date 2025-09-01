#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    do {
        printf("Enter a number 0 to stop: ");
        scanf("%d", &num);

        if (num != 0) {
            sum += num;
            count++;
        }

    } while (num != 0);

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum = %d, Average = %.2f\n", sum, average);
    } else {
        printf("No numbers are enter.\n");
    }

    return 0;
}
