#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,pr,add,total;
    printf("PLEASE ENTER A MARKS OF 5 SUBJECT:");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    scanf("%d",&s4);
    scanf("%d",&s5);
    add=s1+s2+s3+s4+s5;
    total=500;
    pr = (add * 100) / total;

    if(pr>0)
    {

    
        if(pr>=90)
        {
            
            printf ("YOU GET A+ GRADE");
        }
        else if (pr>=80)
        {
           
            printf ("YOU GET A GRADE");
        }
          else if (pr>=70)
        {
           
            printf ("YOU GET B GRADE");
        }
          else if (pr>=60)
        {
           
            printf ("YOU GET C GRADE");
        }
          else if (pr>=5)
        {
          
            printf ("YOU GET D GRADE");
        }
          else if (pr>=40)
        {
           
            printf ("YOU GET E GRADE");
        }
        else if (pr<40)
        {
            printf("YOU ARE FAIL");
        }
        return 0;
    }
    else
    {
        printf("INVALID INPUT");
    }

}