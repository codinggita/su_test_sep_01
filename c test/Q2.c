#include <stdio.h>
int main()
{
    int unit, bill ;
    printf("enter the number of electricity units  ");
    scanf("%d", &unit);

    if (unit >= 0 && unit <= 50)

    {
        bill = 2 * unit +100;
        printf("your elecctricity bill is = %d", bill);
    }

    else if (unit >= 51 && unit <= 100)

    {
        bill = 3 * unit +100;
        printf("your elecctricity bill is = %d", bill);
    }

    else if (unit >= 101 && unit <= 200)

    {
        bill = 4 * unit +100;
        printf("your elecctricity bill is = %d", bill);
    }

    else if (unit >= 201 && unit <= 300)

    {
        bill = 5 * unit +100;
        printf("your elecctricity bill is = %d", bill);
    }

    else if (unit >= 301 && unit <= 500)

    {
        bill = 6 * unit +100;
        printf("your elecctricity bill is = %d", bill);
    }
    
    else if (unit > 0 && unit <= 50)

    {
        bill = 8 * unit +100;
        printf("your elecctricity bill is = %d", bill);
    }


    return 0;
}