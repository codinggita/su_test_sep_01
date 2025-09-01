
#include <stdio.h>

int main() {
    int num, reversed = 0, digit, i;
    printf("Enter an integer: ");
    scanf("%d", &num);

    i = num;

    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    if (i == reversed) {
        printf("%d is a palindrome.\n", i);
    } else {
        printf("%d is not a palindrome.\n", i);
    }

    return 0;
}