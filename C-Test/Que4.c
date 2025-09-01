#include <stdio.h>
int main()
{
    int cha, fac=1;
    printf("PLEASE ENTER A NUMBER:");
    scanf("%d",&cha);
    for(int i=1; i<=cha; i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);
    return 0;
}