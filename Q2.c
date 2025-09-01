#include <stdio.h>

int main()
{
    int unit;
    printf("Enter units: ");
    scanf("%d", &unit);

    if (unit >= 0 && unit <= 50)
    {
        printf("Bill: %d", (unit * 2) + 100);
    }
    else if (unit >= 51 && unit <= 100)
    {
        printf("Bill: %d", (unit * 3) + 100);
    }
    else if (unit >= 101 && unit <= 200)
    {
        printf("Bill: %d", (unit * 4) + 100);
    }
    else if (unit >= 200 && unit <= 300)
    {
        printf("Bill: %d", (unit * 5) + 100);
    }
    else if (unit >= 300 && unit <= 500)
    {
        printf("Bill: %d", (unit * 6) + 100);
    }
    else
    {
        printf("Bill :", (unit * 8) + 100);
    }
    return 0;
}