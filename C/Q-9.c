#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0, average;

    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);

        if (num != 0)
         {
            sum += num;
            count++;
        }

    } 
    while (num != 0);

    if (count > 0)
     {
        average = sum / count;
        printf("\nTotal Sum = %.2f\n", sum);
        printf("Average = %.2f\n", average);
    }
     else 
    {
        printf("\nNo numbers were entered.\n");
    }

    return 0;
}