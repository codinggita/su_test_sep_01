#include <stdio.h>

int main()
{
    int n,add;
    printf("\n\t electricity units:");
    scanf("%d",&n);
    if(0>n&&n<50)
    {
        printf("2 per unit");
    }
    else if(51>n&&n<100)
    {
        printf("\n\t 3 per unit");
    }
    else if(101>n&&n<200)
    {
        printf("\n\t 4 per unit");
    }
    else if(201>n&&n<300)
    {
        printf("\n\t 5 per unit");
    }
     else if(301>n&&n<500)
    {
        printf("\n\t 6per unit");
    }
    else
    {
        printf("\n\t 8 per unit");
    }
    add=100+n;
    printf("\n\ttotal bill=%d",add);

    return 0;
}
