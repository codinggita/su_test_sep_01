#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    do {
        printf("\nCalculator Menu\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        if (choice == 1) {
            result = a + b;
            printf("Result = %.2f\n", result);
        }
        else if (choice == 2) {
            result = a - b;
            printf("Result = %.2f\n", result);
        }
        else if (choice == 3) {
            result = a * b;
            printf("Result = %.2f\n", result);
        }
        else if (choice == 4) {
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Division by zero not possible\n");
        }
        else if (choice == 5) {
            printf("Exit success!\n");
        }
        else {
            printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
