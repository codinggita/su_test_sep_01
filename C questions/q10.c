#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    if ((num & (num - 1)) == 0) {
        printf("Power of 2");
    }
    else {
        printf("not power of 2");
    }

	return 0;

}