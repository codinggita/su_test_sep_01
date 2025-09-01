#include <stdio.h>
int main() {
    int marks[5], total = 0;
    int percentage;
    char grade;

    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;

    if (percentage >= 90)
        printf(grade, "%cA+");
    else if (percentage >= 80)
        printf(grade, "%cA");
    else if (percentage >= 70)
        printf(grade, "%cB");
    else if (percentage >= 60)
        printf(grade, "%cC");
    else if (percentage >= 50)
        printf(grade, "%cD");
    else if (percentage >= 40)
        printf(grade, "%cE");
    else
        printf(grade, "%cFail");

    printf("Percentage = %d\n", percentage);
    printf("Grade %c\n", grade);

    return 0;
}