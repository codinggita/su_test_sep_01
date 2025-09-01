// 10. Power of 2 Check(Bitwise Operator)
//         Write a C program that checks whether a number is a power of 2 using bitwise operators.Hint : (n &(n - 1)) == 0 means power of 2.


#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && (n & (n - 1)) == 0)
    {
        printf("%d is a power of 2.\n", n);
    }
    else
    {
        printf("%d is NOT a power of 2.\n", n);
    }

    return 0;
}
