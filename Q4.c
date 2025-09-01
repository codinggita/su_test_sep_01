#include <stdio.h>
int main() {
    int s, i;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &s);

    if (s < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= s; ++i) {
            factorial *= i;
        }
        printf("%d\n",factorial);
    }

    return 0;
}
