#include <stdio.h>
int main()
{
 int n;
    printf("PLEASE ENTER A UNIT:");
    scanf("%d",&n);

    if((n & (n-1)) == 0)
    {
        printf("POWER OF 2");
    }
    else
    {
        printf("NOT POWER OF 2");
    }
    return 0;
}
