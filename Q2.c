#include <stdio.h>

int main()
{
    int units;
    float bill ;
  

    printf("Enter the number of electricity units consumed: ");
    scanf("%d", &units);

   if (units <= 50) {
        bill = units * 2;
    } else if (units >= 51 && units <=100) {
        bill = units * 2;
    } else if (units>=101 && units <= 200) {
        bill = units* 4;
    } else if (units>=201 && units <= 300) {
        bill = units * 5;
    } else if (units>=301 && units <= 500) {
        bill = units *  6;
    } else {
        bill = units* 8;
    }

  
    printf("Total electricity bill: ₹%f\n", bill);

    return 0;
}