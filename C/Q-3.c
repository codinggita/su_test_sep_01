#include <stdio.h>

int main()
 {
    
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    printf("Enter marks for 5 subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 90)
     {
        printf("Grade: A+\n");
    } 
    else if (percentage >= 80) 
    {
        printf("Grade: A\n");
    } 
    else if (percentage >= 70)
     {
        printf("Grade: B\n");
    }
     else if (percentage >= 60)
      {
        printf("Grade: C\n");
    }
     else if (percentage >= 50) 
    {
        printf("Grade: D\n");
    }
     else if (percentage >= 40)
      {
        printf("Grade: E\n");
    } 
    else
     {
        printf("Grade: Fail\n");
    }

    return 0;
}