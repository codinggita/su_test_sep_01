#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    float percentage;
    char grade;

    printf("Enter marks for 5 subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }


    percentage = (total / 5.0);

    if (percentage >= 90) {
        grade = 'A+'; 
        printf("Percentage = %.0f%%\nGrade A+\n", percentage);
    } 
    else if (percentage >= 80) {
        grade = 'A'; 
        printf("Percentage = %.0f%%\nGrade A\n", percentage);
    }
    else if (percentage >= 70) {
        grade = 'B'; 
        printf("Percentage = %.0f%%\nGrade B\n", percentage);
    } 
    else if (percentage >= 60) {
        grade = 'C'; 
        printf("Percentage = %.0f%%\nGrade C\n", percentage);
    }
    else if (percentage >= 50) {
        grade = 'D';
        printf("Percentage = %.0f%%\nGrade D\n", percentage);
    } 
    else if (percentage >= 40) {
        grade = 'E';
        printf("Percentage = %.0f%%\nGrade E\n", percentage);
    } 
    else {
        printf("Percentage = %.0f%%\nFail\n", percentage);
    }

    return 0;
}

    