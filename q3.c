// 3. Student Grade Calculator(Nested If)
//     Write a C program to input marks of five subjects,
//     calculate the total percentage, and display the grade :
// ≥ 90 → Grade A +


// ≥ 80 → Grade A


// ≥ 70 → Grade B


// ≥ 60 → Grade C


// ≥ 50 → Grade D


// ≥ 40 → Grade E

//     Below 40 → Fail

#include <stdio.h> 
int main()  
{
    
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of 5 subjects: \n"); 
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    
    float total_percentage=(sub1+sub2+sub3+sub4+sub5)/5.0;
    
    if(total_percentage>=90)
    {
        printf("Grade A+");
    }
    else if(total_percentage>=80)
    {
        printf("Grade A");
    }
    else if(total_percentage>=70)
    {
        printf("Grade B");
    }
    else if(total_percentage>=60)
    {
        printf("Grade C");
    }
    else if(total_percentage>=50)
    {
        printf("Grade D");
    }
    else if(total_percentage>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}