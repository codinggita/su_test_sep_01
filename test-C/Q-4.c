#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("not define");
    }
        
     else {
        
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of = %llu\n",factorial);
    }

    return 0;
}
