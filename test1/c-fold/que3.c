#include <stdio.h>
int main () {
    int a,b,c,d,e;
    printf("Enter marks of 5 sub\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float per=((a+b+c+d+e)/5);
    // printf("%f",per);
    if (per>=90) printf("Grade A+\n");
    else if (per>=80) printf("Grade A\n");
    else if (per>=70) printf("Grade B\n");
    else if (per>=60) printf("Grade C\n");
    else if (per>=50) printf("Grade D\n");
    else if (per>=40) printf("Grade E\n");
    else printf("Fail\n");
    printf("Percentage = %f",per);
}