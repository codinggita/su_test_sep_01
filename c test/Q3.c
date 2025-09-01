#include <stdio.h>

int main()
{
    int maths, hindi, english, gujrati, science;
    printf("Enter the number of maths");
    scanf("%d", &maths);

    printf("Enter the number of hindi");
    scanf("%d", &hindi);

    printf("Enter the number of english ");
    scanf("%d", &english);

    printf("Enter the number of gujrati");
    scanf("%d", &gujrati);

    printf("Enter the number of science ");
    scanf("%d", &science);

    int total = maths + hindi + english + gujrati + science;

    float per = total / 5;
    printf("%f% \n", per);
    if (per >= 90)
    {
        printf("you get A+ Grade");
    }
    else if (per >= 80)
    {
        printf("you get A Grade");
    }

    else if (per >= 70)
    {
        printf("you get B Grade");
    }
    else if (per >= 60)
    {
        printf("you get C Grade");
    }

    else if (per >= 50)
    {
        printf("you get D Grade");
    }

    else if (per >= 40)
    {
        printf("you get E Grade");
    }

    else if (per <= 40)
    {
        printf("you are fail");
    }

    return 0;
}