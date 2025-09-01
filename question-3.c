
#include <stdio.h>

int main()
{
  
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

   
    printf("Enter marks for 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &sub1);
    printf("Subject 2: ");
    scanf("%f", &sub2);
    printf("Subject 3: ");
    scanf("%f", &sub3);
    printf("Subject 4: ");
    scanf("%f", &sub4);
    printf("Subject 5: ");
    scanf("%f", &sub5);

   
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    printf("Total Percentage = %.2f%%\n", percentage);

    
    if (percentage >= 90) {
        printf("Grade: A+\n");
    } else {
        if (percentage >= 80) {
            printf("Grade: A\n");
        } else {
            if (percentage >= 70) {
                printf("Grade: B\n");
            } else {
                if (percentage >= 60) {
                    printf("Grade: C\n");
                } else {
                    if (percentage >= 50) {
                        printf("Grade: D\n");
                    } else {
                        if (percentage >= 40) {
                            printf("Grade: E\n");
                        } else {
                            printf("Grade: Fail\n");
                        }
                    }
                }
            }
        }
    }


   
    return 0;
   
}
   