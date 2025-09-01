

#include <stdio.h>
int main (){
    
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    float percentage;
    char grade;

    
    printf("Enter marks for 5 subjects: ");
    scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);

    percentage = (marks1 + marks2 + marks3 + marks4 + marks5) / 5.0;

    if(percentage >= 90) {
        grade = "A+";
    } else if(percentage >= 80) {
        grade = 'A';
    } else if(percentage >= 70) {
        grade = 'B';
    } else if(percentage >= 60) {
        grade = 'C';
    } else if(percentage >= 50) {
        grade = 'D';
    } else if(percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}
