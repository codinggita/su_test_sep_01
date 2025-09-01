#include <stdio.h>
int main()
{
    int a = 0;
    do
    {
        int op;
        printf("\nChoose a operation (1 for Addition, 2 for Subtraction, 3 for multiplication, 4 for division and 5 or more to exit):-");
        scanf("%d", &op);
        if (op >= 1 && op <= 4)
        {
            int num1, num2;
            printf("Enter first number:-");
            scanf("%d", &num1);
            printf("Enter second number:-");
            scanf("%d", &num2);
            switch (op)
            {
            case (1):
                printf("Sum is %d", num1 + num2);
                break;
            case (2):
                printf("Subtraction is %d", num1 - num2);
                break;
            case (3):
                printf("Multiplication is %d", num1 * num2);
                break;
            case (4):
                printf("Division is %d", num1 / num2);
                break;
            }
        }
        else
        {
            break;
        }
        a = op;
    } while (a < 5);
    return 0;
}