#include<stdio.h>
int main()
{
    int phy,chem,maths,english,PE;
    printf(" Enter your phy marks");
    scanf(" %d",&phy);
    printf(" Enter your chem marks");
    scanf(" %d",&chem);
    printf(" Enter your maths marks");
    scanf(" %d",& maths);
    printf(" Enter your english marks");
    scanf(" %d",&english);
    printf(" Enter your PE marks");
    scanf(" %d",&PE);

     float x = (phy+chem+maths+english+PE);
     float y = x/500;
    if(x>=90)
    {
        printf(" Grade A+");
    }
    else if(x>=80)
    {
        printf(" Grade A");
    }

     else if(x>=70)
    {
        printf(" Grade B");

    }

     else if (x>=60)
    {
        printf(" Grade C");
    }

    else if(x>=50)
    {
        printf(" Grade D");

    }
     else if(x>=40)
    {
        printf(" Grade E");
    }


    else {
        printf(" Fail");

    }
 return 0;
}