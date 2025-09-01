#include <stdio.h>

int main()
{
    int a;
    int store = 1;

    scanf("%d", &a);
    for (int b = 1; b <= a; b++)
    {
        store = store * b;
    }
    printf("%d", store);

    return 0;
}
