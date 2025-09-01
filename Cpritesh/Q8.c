#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {

        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

    
        if (choice == 5) {
            printf("Exiting the calculator.\n");
            break;
        }

        printf("Enter the two numbers: ");
        scanf("%f %f", &num1, &num2);

       
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Error:invalid input.\n");
                }
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }

    } while (1);  

    return 0;
}

