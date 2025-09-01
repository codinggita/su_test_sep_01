#include <stdio.h>

int main()
{
    int n,n1,ch,add,mult,dive,sub;
    printf("enter your number");
    scanf("%d",&n);
    printf("enter your number");
    scanf("%d",&n1);
    add=n+n1;
    sub=n-n1;
    mult=n*n1;
    dive=n/n1;
    
    printf("\n\t 1.addition");
    printf("\n\t 2.subtraction");
        printf("\n\t 3.multiplication");
            printf("\n\t 4.division");
    printf("enter users choise:");
    scanf("%d",&ch);
    if(ch=addition)
    {
        printf("%d",add);
    }
    else if(ch=2.subtraction)
    {
        printf("%d",sub);
    }
    else if(ch=3.multiplication)
    {
        printf("%d",mult);
    }
    else 
    {
        printf("%d",dive);
    }
    
    
    

    

    return 0;
}
