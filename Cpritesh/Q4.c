#include <stdio.h>

int main() {
    int num;
   int factorial = 1;
    
    printf("Enter a positive integer here : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for the negative numbers.\n");
    } else {
       
        for (int i = 1; i <= num; i++) {
            factorial =factorial*i;
        }

        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
