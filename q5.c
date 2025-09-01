#include <stdio.h>
int main() {
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if (temp == rev) {
        printf("%d  palindrome.\n", temp);
    } else {
        printf("%d not palindrome.\n", temp);
    }
return 0;
}
