#include <stdio.h>
#include <math.h>

int main() {
    
    int num, digi, power, sum = 0;
    scanf("%d", &num);

    for(int i = num; i > 0; i = i / 10) {

        digi = i % 10;
        power = pow(digi, 3);
        sum = sum + power;
    }

    if (sum == num)  {
        printf("Ang num");
    }
    else {
        printf("Not a Ang num");
    }


    return 0;
}