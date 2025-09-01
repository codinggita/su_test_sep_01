#include <stdio.h>

int main () {

    int num, digi, sum = 0;
    scanf("%d", &num);

    int i = num;
    while(i > 0) {

        digi = i % 10;
        sum = sum + digi; 
        i = i / 10;
    }

    printf("%d", sum);
    
}