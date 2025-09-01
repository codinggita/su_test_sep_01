#include <stdio.h>

int main() {
    int n, s = 0, c = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n != 0) {
            s += n;
            c++;
        }
    }
    
    while (n != 0);
    if (c > 0) {
        printf("S = %d, Average = %d\n", s, s / c);
    } else {
        printf("No numbers entered.\n");
    }

    return 0;
}
