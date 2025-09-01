#include <stdio.h>

int main () {

    int units, bill = 0;
    scanf("%d", &units);

    if (units > 0) {

        if (units >= 0 && units <= 50) {
            bill = units*2 + 100;
        }
        else if (units >= 51 && units <= 100) {
            bill = units*3 + 100;
        }
        else if (units >= 101 && units <= 200) {
            bill = units*4 + 100;
        }
        else if (units >= 201 && units <= 300) {
            bill = units*5 + 100;
        }
        else if (units >= 301 && units <= 500) {
            bill = units*6 + 100;
        }
        else if (units > 500) {
            bill = units*8 + 100;
        }

    }
    else {
        printf("Invalid input");
    }

    printf("%d", bill);

    return 0;
}