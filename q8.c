// 8. Menu - Driven Calculator(Do–While Loop)
//               Write a C program to create a calculator that performs : 
// Addition

// Subtraction

//  Multiplication

//   Division
// The program should keep running until the user chooses Exit.

#include <stdio.h>

int main() {
    
    int num1, num2, choice;

    do {
        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case 4:
                printf("Result: %d / %d = %d\n", num1, num2, num1 / num2);
                break;
            case 5:
                printf("Exiting the calculator.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}