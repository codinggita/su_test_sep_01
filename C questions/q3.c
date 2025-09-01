#include <stdio.h>

int main () {

    int sub1, sub2, sub3, sub4, sub5;
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    int per = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
    
    if (per >= 90 ) {
        printf("Grade A+");
    }
    else if (per >= 80) {
        printf("Grade A");
    }
    else if (per >= 70) {
        printf("GradeB");
    }
    else if (per >= 60) {
        printf("Grade C");
    }
    else if (per >= 50) {
        printf("Grade D");
    }
    else if (per >= 40) {
        printf("Grade E");
    }
    else if (per < 40) {
        printf("Fail");
    }

    printf("%d", per);

    return 0;
}