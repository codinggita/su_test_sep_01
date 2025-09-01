#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5;
    float per;
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    per = (s1 + s2 + s3 + s4 + s5) / 5.0;
    printf("Per = %.2f%%\n", per);
    if (per >= 90)
        printf("Grade A+\n");
    else if (per >= 80)
        printf("Grade A\n");
    else if (per >= 70)
        printf("Grade B\n");
    else if (per >= 60)
        printf("Grade C\n");
    else if (per >= 50)
        printf("Grade D\n");
    else if (per >= 40)
        printf("Grade E\n");
    else
        printf("Fail\n");

    return 0;
}
