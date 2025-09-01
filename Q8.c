#include <stdio.h>

int main() {
    int choice;
    float a, b;
     printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

    do {
        if (choice >= 1 && choice <= 4) {
            printf("\nAlright, let's do this.\n");
            printf("Enter the first number: ");
            scanf("%f", &a);
            printf("Enter the second number: ");
            scanf("%f", &b);
        }

        if (choice == 1) {
            printf("The sum of %.2f and %.2f is %.2f\n", a, b, a + b);
        }
        else if (choice == 2) {
            printf("If we subtract %.2f from %.2f, the result is %.2f\n", b, a, a - b);
        }
        else if (choice == 3) {
            printf("The product of %.2f and %.2f is %.2f\n", a, b, a * b);
        }
        else if (choice == 4) {
            if (b != 0) {
                printf("Dividing %.2f by %.2f gives %.2f\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not possible.\n");
            }
        }
        
        else {
            printf("Invalid choice.\n");
        }

    } while (choice < 5);

    return 0;
}
