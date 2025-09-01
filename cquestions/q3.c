#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    int sum=a+b+c+d+e;
    int div=sum/5;
  
    int percentage=div;
printf("total percentage is %d\n",percentage);
    if (percentage>= 90 && percentage <= 100)
    {
        printf("A+ Grade");
    }
    else if (percentage >= 80 && percentage < 90)
    {
        printf("A Grade");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("B Grade");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("C Grade");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("A Grade");
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("E Grade");
    }
    else

    {
        printf("FAIL");
    }

    return 0;
}
