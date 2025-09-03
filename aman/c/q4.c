#include <stdio.h>

int main()
{
        int n, i;
     int factorial = 1;

    
    printf("num: ");
    scanf("%d", &n);

    
    if (n < 0) {
        printf("Factoria is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Output: Factorial = %d\n", factorial);
    }

    return 0;
}
