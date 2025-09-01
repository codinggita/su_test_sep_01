#include <stdio.h>

int main() {
    int x, y, reversed = 0, z;

    printf("Enter a number: ");
    scanf("%d", &x);

    y = x; 

    while (x > 0) {
        z = x % 10;              
        reversed = reversed * 10 + z; 
        x = x / 10;                 
    }

    printf("Reversed number = %d\n", reversed);

    if (y == reversed) {
        printf("%d is a Palindrome.\n", y);
    } else {
        printf("%d is NOT a Palindrome.\n", y);
    }

    return 0;
}
