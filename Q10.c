#include <stdio.h>

// Function to check if a number is a power of 2
int isPowerOfTwo(int n) {
    
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isPowerOfTwo(number)) {
        printf("%d is a power of 2.\n", number);
    } else {
        printf("%d is not a power of 2.\n", number);
    }

    return 0;
}