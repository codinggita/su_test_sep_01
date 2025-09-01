#include <stdio.h>
int main()
{
    int cha, bill;
    printf("PLEASE ENTER A UNIT:");
    scanf("%d",&cha);
    if(cha>0)
    {
        if(cha<=50)
        {
            bill=cha*2;
            printf ("YOUR BILL WILL BE %d",bill);
        }
        else if (cha>50 & cha<=100)
        {
           bill=cha*3;
            printf ("YOUR BILL WILL BE %d",bill);
        }
          else if (cha>100 & cha<=200)
        {
           bill=cha*4;
            printf ("YOUR BILL WILL BE %d",bill);
        }
          else if (cha>200 & cha<=300)
        {
           bill=cha*5;
            printf ("YOUR BILL WILL BE %d",bill);
        }
          else if (cha>300 & cha<=500)
        {
           bill=cha*6;
            printf ("YOUR BILL WILL BE %d",bill);
        }
          else if (cha>500)
        {
           bill=cha*8+100;
            printf ("YOUR BILL WILL BE %d",bill);
        }
        return 0;
    }
}