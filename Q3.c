#include<stdio.h>

int main()
{
    int math, sci, ss, hindi, eng, sum=0, per;
    printf("Enter marks of math, science, SS, Hindi and English: ");
    scanf("%d %d %d %d %d", &math, &sci, &ss, &hindi, &eng );
    sum = math + sci + ss + hindi + eng;
    per=sum/5;
    if (per >= 90)
    {
        printf("Percentage : %d ", per);
        printf("Grade A+");
    }
    else if (per >= 80)
    {
        printf("Percentage : %d\n", per);
        printf("Grade A");
    }
    else if (per >= 70)
    {
        printf("Percentage : %d\n", per);
        printf("Grade B");
    }
    else if (per >= 60)
    {
        printf("Percentage : %d\n", per);
        printf("Grade C");
    }
    else if (per >= 50)
    {
        printf("Percentage : %d\n", per);
        printf("Grade D");
    }
    else if (per >= 40)
    {
        printf("Percentage : %d\n", per);
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }

    

    return 0;
}