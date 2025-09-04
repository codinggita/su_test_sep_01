
#include <stdio.h>

int main() {
    int units, bill;
    printf("Enter units: ");
    scanf("%d", &units);

    if (units <= 50) 
    printf("bill = units * 2");
    else if (units <= 100) 
    printf ("bill = units * 3");
    else if (units <= 200) 
    printf (" bill = units * 4");
    else if (units <= 300) 
    printf(" bill = units * 5");
    else if (units <= 500) 
    printf ("bill = units * 6");
    else 
    printf ( "bill = units * 8;")

    bill += 100; 
    printf("Total Bill =%d", bill);

    return 0;
}
