#include <stdio.h>
int main() {
    int n, t, r, s = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while (t > 0) 
    {
        r = t % 10;
        s = s + (r * r * r);
        t = t / 10;
    }
    if (s == n)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}

