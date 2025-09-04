#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    if (count > 0) {
        double average = (double)sum / count;
        printf("Sum = %d, Average = %.2f\n", sum, average);
    } else {
        printf("No numbers are enter.\n");
    }

    return 0;
}