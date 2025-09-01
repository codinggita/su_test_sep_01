#include <stdio.h>

int main() {
    int u;
    float b;
    const int fc = 100;

    printf("Enter units : ");
    scanf("%d", &u);

    if (u <= 50)
        b = u * 2;
    else if (u <= 100)
        b = 50 * 2 + (u - 50) * 3;
    else if (u <= 200)
        b = 50 * 2 + 50 * 3 + (u - 100) * 4;
    else if (u <= 300)
        b = 50 * 2 + 50 * 3 + 100 * 4 + (u - 200) * 5;
    else if (u <= 500)
        b = 50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + (u - 300) * 6;
    else
        b = 50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + 200 * 6 + (u - 500) * 8;

    b += fc;

    printf("Total Bill = ₹%.2f\n", b);
    return 0;
}
