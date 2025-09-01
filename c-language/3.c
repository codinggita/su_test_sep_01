#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    printf("Enter the marks of first subject: ");
    scanf("%d", &m1);
    printf("Enter the marks of second subject: ");
    scanf("%d", &m2);
    printf("Enter the marks of third subject: ");
    scanf("%d", &m3);
    printf("Enter the marks of fourth subject: ");
    scanf("%d", &m4);
    printf("Enter the marks of fifth subject: ");
    scanf("%d", &m5);

    float per;
    per = (m1 + m2 + m3 + m4 + m5) * 100.0 / 500;
    printf("The percentage = %f\n", per);

    if (per >= 90) {
        printf("Grade A+");
    } else if (per >= 80) {
        printf("Grade A");
    } else if (per >= 70) {
        printf("Grade B");
    } else if (per >= 60) {
        printf("Grade C");
    } else if (per >= 50) {
        printf("Grade D");
    } else if (per >= 40) {
        printf("Grade E");
    } else {
        printf("Fail");
    }
    return 0;
}