#include <stdio.h>
int main()
{
    int cha, fac=1;
    printf("PLEASE ENTER A NUMBER:");
    scanf ("%d",&cha);
    int rev=0;
    int last;
    int add=0;
    

    while (cha>0)
    {
        last=cha%10;
        add+=last;
        cha=cha/10;

    }
    printf ("%d\n",add);
    
    return 0;
}