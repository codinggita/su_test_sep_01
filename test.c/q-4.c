

#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");

    scanf("%d", &a);
    int b=1;
    int c;
    for (c = 1; c <= a; c++){
         b= b*c;}

    printf("Factorial = %d\n",b);
    return 0;
}



    