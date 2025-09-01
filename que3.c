#include <stdio.h>

int main()
{
    int n,n1,n2,n3,n4,tot,per;
    printf("\n\t enter your first subject marks:");
    scanf("%d",&n);
     printf("\n\t enter your second subject marks:");
    scanf("%d",&n1);
     printf("\n\t enter your third subject marks:");
    scanf("%d",&n2);
     printf("\n\t enter your forth subject marks:");
    scanf("%d",&n3);
     printf("\n\t enter your fifth subject marks:");
    scanf("%d",&n4);
    
    tot=n+n1+n2+n3+n4;
    printf("\n\t total=%d",tot);
    if(tot>=90)
    {
        printf("\n\t grade A+");
    }
    else if(tot>=80)
    {
        printf("\n\t grade A");
    }
    else if(tot>=70)
    {
        printf("\n\t grade B");
    }
    else if(tot>=60)
    {
        printf("\n\t grade C");
    }
    else if(tot>=50)
    {
        printf("\n\t grade D");
    }
    else if(tot>=40)
    {
        printf("\n\t grade E");
    }
    else
    {
        printf("\n\t Fail");
    }
    per=tot/5;
    printf("\n\t percentage=%d",per);

    return 0;
}