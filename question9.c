#include <stdio.h>

int main() {
    
    int number;
    int sum = 0;
    int count = 0;
    float average;

   

    while (1) {
        scanf("%d", &number);

        if (number == 0) { break;
        }

        sum += number;
        count++;
    }

    if (count == 0) {
        printf("No numbers were entered.\n");
    } else {
        average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Avg = %.2f\n", average);
    }

    return 0;
}