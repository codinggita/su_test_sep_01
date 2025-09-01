#include <stdio.h>
int main() {

    int sub1,sub2,sub3,sub4,sub5;
    scanf("%d %d %d %d %d",&sub1 ,&sub2 ,&sub3 ,&sub4 ,&sub5);

    int total=(sub1+sub2+sub3+sub4+sub5)/5;
     printf("Percentage = %d%% \n",total);
    


    if (total>=90)
    {
       
       printf("Grade A+");
    }
    
    else if (total>=80)
    {
       
       printf("Grade A");
    }

    else if (total>= 70)
    {
       
       printf(" Grade B");
    }

   else if (total>= 60)
    {
       
       printf("Grade C");
    }

    else if (total>= 50)
    {
       
       printf("Grade D");
    }
      else if (total>= 40)
    {
       
       printf("Grade E");
    }
      else if (total< 40)
    {
       
       printf("Fail");
    }
    return 0;
}