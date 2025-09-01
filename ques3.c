#include <stdio.h>

int main()
{
    int physics;
    printf("ENTER THE MARKS OF PHYSICS : ");
    scanf("%d",&physics);
    int chemistry;
    printf("ENTER THE MARKS OF CHEMISTRY : ");
    scanf("%d",&chemistry);
    int maths;
    printf("ENTER THE MARKS OF MATHS : ");
    scanf("%d",&maths);
    int english;
    printf("ENTER THE MARKS OF ENGLISH : ");
    scanf("%d",&english);
    int computer;
    printf("ENTER THE MARKS OF COMPUTER : ");
    scanf("%d",&computer);
    int sum=physics+chemistry+maths+computer+english;
    float percentage=sum/5;
    printf("%f",percentage);
    printf("\n");
    
    if(percentage>=90)
    {
        printf("A+ GRADE");
    }
    else if(percentage>=80)
    {
        printf("A GRADE");
    }
    else if(percentage>=70)
    {
        printf("B GRADE");
    }
    else if(percentage>=60)
    {
        printf("C GRADE");
    }
    else if(percentage>=50)
    {
        printf("D GRADE");
    }
    else if(percentage>=40)
    {
        printf("E GRADE");
    }
    else if(percentage<40)
    {
        printf("FAIL");
    }
    return 0;
}