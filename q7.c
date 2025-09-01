#include <stdio.h> 

int main() {
    int num, rem, sum = 0;
    printf(" number: ");
    scanf("%d", &num);
    int temp = num;
    while (num != 0) {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }
    if (temp == sum) {
        printf("%d  Armstrong number.\n", temp);
    } else {
        printf("%d  not Armstrong number.\n", temp);
    }
return 0;
}