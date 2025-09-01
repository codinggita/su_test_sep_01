#include <stdio.h>
int main()
{
 int a, b, c, d, e;
    printf("Enter your marks\n");
    scanf("%d %d %d %d %d" ,&a, &b, &c, &d, &e);
    if(a>100 || b>100 || c>100 || d>100 || e>100)
    {
        printf("Please enter valid marks.");
    }
    else
    {
    int total=a+b+c+d+e;
    float per=(float)total/5;
    printf("Percentage=%.2f\n",per);
    
    
    if (per>=90)
    {
        printf("Grade A+");
    }
    else if(per>=80)
    {
        printf("Grade A");
    }
    else if(per>=70)
    {
        printf("Grade B");
    }
    else if(per>=60)
    {
        printf("Grade C");
    }
    else if(per>=50)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else if(per<80)
    {
        printf("Fail");
    }
}


    return 0;
}