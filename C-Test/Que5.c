#include <stdio.h>
int main()
{
    int cha, fac=1;
    printf("PLEASE ENTER A NUMBER:");
    scanf ("%d",&cha);
    int rev=0;
    int last;
    int up=cha;
    

    while (up>0)
    {
        last=up%10;
        rev=rev*10+last;
        up=up/10;

    }
    printf ("%d\n",rev);
    if(cha==rev)
    {
        printf("GIVEN NUMBER IS PALINDRAME\n");
    }
    else
    {
        printf("GIVEN NUMBER IS NOT PALINDRAME\n");
    }
    return 0;
}