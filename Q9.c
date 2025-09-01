#include <stdio.h>

int main() {
    int num, c = 0;
    float sum = 0, average;

    printf("Enter numbers :\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;  
        }

        sum += num;
        c++;     
    }

    if (c > 0) {
        average = sum / c;
        printf("\nSum of numbers = %.2f\n", sum);
        printf("Average of numbers = %.2f\n", average);
    } else {
        printf("\nNo numbers were entered.\n");
    }

    return 0;
}
