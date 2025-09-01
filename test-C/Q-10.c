#include <stdio.h>

int isPowerOfTwo(unsigned int n) {
    return (n != 0) && ((n & (n - 1)) == 0);
}

int main() {
    unsigned int num;

    printf("Enter a positive integer: ");
    scanf("%u", &num);

    if (isPowerOfTwo(num))
        printf("%u is a power of 2.\n", num);
    else
        printf("%u is NOT a power of 2.\n", num);

    return 0;
}
