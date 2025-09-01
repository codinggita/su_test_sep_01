#include <stdio.h>

int main() {
    int u;
    printf("Enter the number of units consumed: ");
    scanf("%d", &u);

    int bill,fixbill = 100; 

    if (u <= 50) {
        bill += u * 2;
    } else if (u <= 100) {
        bill += (50 * 2) + ((u - 50) * 3);
    } else if (u <= 200) {
        bill += (50 * 2) + (50 * 3) + ((u - 100) * 4);
    } else if (u <= 300) {
        bill += (50 * 2) + (50 * 3) + (100 * 4) + ((u - 200) * 5);
    } else if (u <= 500) {
        bill += (50 * 2) + (50 * 3) + (100 * 4) + (100 * 5) + ((u - 300) * 6);
    } else {
        printf("Units are outside the defined billing cycle.\n");
        return 1; 
    }

    int totalbill=fixbill+bill;
    printf("Total Bill = ₹%d\n", totalbill);
    return 0;
}
