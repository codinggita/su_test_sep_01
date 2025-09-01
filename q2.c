// Write a C program that reads the number of electricity units
//  consumed by a customer and calculates the total bill using the following slab system:
// 0–50 units → ₹2 per unit
// 51–100 units → ₹3 per unit
// 101–200 units → ₹4 per unit
// 201–300 units → ₹5 per unit
// 301–500 units → ₹6 per un
#include <stdio.h>

int main() {
    int units;
    int bill = 0;
    int fixed_charge = 100;

    printf("Enter no of units consumed: ");
    scanf("%d", &units);

    if (units > 0 && units <= 50) {
        bill = units * 2;
    }
    else if (units <= 100) {
        bill = (50 * 2) + (units - 50) * 3;
    }
    else if (units <= 200) {
        bill = (50 * 2) + (50 * 3) + (units - 100) * 4;
    }
    else if (units <= 300) {
        bill = (50 * 2) + (50 * 3) + (100 * 4) + (units - 200) * 5;
    }
    else if (units <= 500) {
        bill = (50 * 2) + (50 * 3) + (100 * 4) + (100 * 5) + (units - 300) * 6;
    }
    else {
        bill = (50 * 2) + (50 * 3) + (100 * 4) + (100 * 5) + (200 * 6) + (units - 500) * 8;
    }

    bill += fixed_charge; // add fixed charge

    printf("Your total electricity bill is Rs %d\n", bill);

    return 0;
}
