# include <stdio.h>

int main() {
    int num,  count = 0;
    float sum = 0;
    float average;

    do {
        printf("Enter a number (0 to ∞ ): ");
        scanf("%d", &num);

        if (num != 0) {
            sum += num;
            count++;
        }
    } while (num != 0);
    if (count > 0) {
        average = sum / count;
        printf("Sum = %.0f, Average = %.2f\n", sum, average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
