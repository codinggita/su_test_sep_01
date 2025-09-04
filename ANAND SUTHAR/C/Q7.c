#include <stdio.h>

int main() {
    int num, original, remainder, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 


    while (num != 0) {
        remainder = num % 10;
        result = result+remainder * remainder * remainder;
        num = num/10;
    }


    if (original == result) {
        printf("Armstrong Number\n");
    } else {
        printf("Not Armstrong Number\n");
    }

    return 0;
}