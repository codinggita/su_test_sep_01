#include <stdio.h>

int main() {
    int num, original, remainder, res = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 


    while (num != 0) {
        remainder = num % 10;
        res = res+remainder * remainder * remainder;
        num = num/10;
    }


    if (original == res) {
        printf(" An armstrong Number\n");
    } else {
        printf("Not an armstrong Number\n");
    }

    return 0;
}
