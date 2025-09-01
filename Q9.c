#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int count = 0;

    printf("Enter numbers (0 to stop):\n");

    do {
        scanf("%d", &num);
        if (num == 0)
            break;
        sum += num;
        count++;
    }while(1);

    if (count > 0) {
        int average = sum / count;
        printf("Sum: %d\n", sum);
        printf("Average: %d\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
