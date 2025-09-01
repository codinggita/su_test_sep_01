#include <stdio.h>

int main() {
    int num, sum = 0, count = 0, avg;
    do {
        printf(" Number: ");
        scanf("%d", &num);
        if (num != 0) {
            sum += num;
            count++;
        }
    } while (num != 0);
    if (count > 0) {
        avg = sum / count;
        printf("Sum: %d\nAverage: %d\n", sum, avg);
    } else {
        printf("No numbers \n");
    }
return 0;
}