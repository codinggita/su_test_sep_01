#include <stdio.h>

int main() {
    int units;
    scanf("%d", &units);

    float d = 0;

    if(units >= 0 && units <= 50) {
        printf("%d\n", units * 2);
    }
    else if(units >= 51 && units <= 100) {
        printf("%d\n", units * 3);
    }
    else if(units >= 101 && units <= 200) {
        printf("%d\n", units * 4);
    }
    else if(units >= 201 && units <= 300) {
        printf("%d\n", units * 5);
    }
    else if(units >= 301 && units <= 500) {
        printf("%d\n", units * 6);
    }

    return 0;
}