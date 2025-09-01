#include <stdio.h>

int main() {
    int mark1, mark2, mark3, mark4, mark5;
    int total;
    float percentage;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);

    total = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = (total / 500.0)*100;


    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade A+\n");
    else if (percentage >= 80)
        printf("Grade A\n");
    else if (percentage >= 70)
        printf("Grade B\n");
    else if (percentage >= 60)
        printf("Grade C\n");
    else if (percentage >= 50)
        printf("Grade D\n");
    else if (percentage >= 40)
        printf("Grade E\n");
    else
        printf("Fail\n");

    return 0;
}

