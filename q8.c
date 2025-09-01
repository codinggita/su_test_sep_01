 #include <stdio.h>

int main() {
    int num1, num2,  op;

    do {
        printf("First number: ");
        scanf(" %d", &num1);

        printf(" Second number: ");
        scanf(" %d", &num2);

        printf(" operations Are:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        scanf(" %d", &op);

        if( op == 1) {
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
        } 
        else if( op == 2) {
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
        } 
        else if( op == 3) {
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
        } 
        else if( op == 4) {
            if (num2 != 0) {
                printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
            } else {
                printf("when zero , No output \n");
            }
        } 
        else if( op == 5) {
            printf("Over \n");
        } 
        else {
            printf("No ( op\n");
        }

    } while ( op!= 5);

return 0;
}

