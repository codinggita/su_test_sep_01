#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = total / 5.0;
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
    else if (percentage <40)
        printf("Fail");

        else{printf("not valid");}




        return 0;
}