#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int count = 0;

    do {
        printf("Enter a number : ");
        scanf("%d", &n);

        if (n != 0) {
            sum += n;
            count++;
        }
    } while (n != 0);

    if (count > 0) {
        float average = (float)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

 
    return 0;
}
