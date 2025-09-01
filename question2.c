#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;
    int fixed_charge = 100; 

    
    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

    
    if (units <= 50) {
        bill = units * 2.0;
    } else if (units <= 100) {
        bill = (50 * 2.0) + (units - 50) * 3.0;
    } else if (units <= 200) {
        bill = (50 * 2.0) + (50 * 3.0) + (units - 100) * 4.0;
    } else if (units <= 300) {
        bill = (50 * 2.0) + (50 * 3.0) + (100 * 4.0) + (units - 200) * 5.0;
    } else if (units <= 500) {
        bill = (50 * 2.0) + (50 * 3.0) + (100 * 4.0) + (100 * 5.0) + (units - 300) * 6.0;
    } else {
        bill = (50 * 2.0) + (50 * 3.0) + (100 * 4.0) + (100 * 5.0) + (200 * 6.0) + (units - 500) * 8.0;
    }

    
    bill += fixed_charge;

    
    printf("Total Bill = ₹%.2f\n", bill);

    return 0;
}

                                          // rong output 