

#include <stdio.h>



int main() {

    int number;

    int factorial = 1;  


    printf("positive integer: ");

    scanf("%d", &number);



    for (int I = 1; I <= number; I++) {

        factorial *= I;

    }



    printf("Factorial of %d = %d\n", number, factorial);



return 0;

}