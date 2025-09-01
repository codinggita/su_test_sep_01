#include <stdio.h>

int main() {
    int n, s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        s=s + (n % 10);
        n=n / 10;
    }
    printf("Sum of Digits = %d\n", s);
    return 0;
}
