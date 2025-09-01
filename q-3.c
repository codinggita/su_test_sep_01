#include <stdio.h>

int main(){
    int mark1,mark2,mark3,mark4,mark5,grade;
    
    printf("input marks :");
    scanf("%d %d %d %d %d", &mark1,&mark2,&mark3,&mark4,&mark5);

    grade = (mark1+mark2+mark3+mark4+mark5)/5;


if (grade >= 0 && grade <= 100)
{
    printf("Percentage : %d \n", grade);

    if (grade >=90)
    {
        printf("Grade A+");
    }   
    else if (grade >=80 && grade < 90)
    {
        printf("Grade A");
    }
    else if (grade >=70 && grade < 80)
    {
        printf("Grade B");
    }    
    else if (grade >=60 && grade < 70)
    {
        printf("Grade C");
    }
    else if (grade >=50 && grade < 60)
    {
        printf("Grade D");
    }
    else if (grade >=40 && grade < 50)
    {
        printf("Grade E");
    }
    else{
        printf("fail");
    }
    }
    else
    {
        printf("invalid marks");
    }
    
    
    
    
    
    return 0;
}