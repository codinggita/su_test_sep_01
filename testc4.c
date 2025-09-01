int main() {
    int number;
    int i;
    int factorial = 1; 

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Enter a valid number.\n");
    } else {
        for (i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %d\n", number, factorial);
    }

    return 0;
}