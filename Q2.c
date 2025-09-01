#include <stdio.h>

int main() {
    int units;
    int R = 100;

    printf("Enter units : ");
    scanf("%d", &units);

    if (units <= 50) {
        R += units * 2;
    } else {
     if (units <= 100) {
     R += (50 * 2) + (units - 50) * 3;
    } else {
    if (units <= 200) {
    R += (50 * 2) + (50 * 3) + (units - 100) * 4;
    } else {
    if (units <= 300) {
    R += (50 * 2) + (50 * 3) + (100 * 4) + (units - 200) * 5;
    } else {
    if (units <= 500) {
    R+= (50 * 2) + (50 * 3) + (100 * 4) + (100 * 5) + (units - 300) * 6;
    } else {
     R += (50 * 2) + (50 * 3) + (100 * 4) + (100 * 5) + (200 * 6) + (units - 500) * 8;
   }} }} }

    printf("Total Bill = ₹%d\n", R);
    return 0;
}
