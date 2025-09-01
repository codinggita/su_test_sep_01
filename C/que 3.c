#include <stdio.h>

int main ()
{
    int a, b, c, d, e;

    printf("enter marks of subject 1\n");
    scanf("%d", &a);

    printf("enter marks of subject 2\n");
    scanf("%d", &b);

    printf("enter marks of subject 3\n");
    scanf("%d", &c);

    printf("enter marks of subject 4\n");
    scanf("%d", &d);

    printf("enter marks of subject 5\n");
    scanf("%d", &e);
    int marks= a+b+c+d+e;

    if(marks>=90){
        printf("Grade A+");
    }
    else if (marks>=80){
        printf("Grade B");
    }
    else if(marks>=70){
        printf("Grade C");
    }
    else if(marks>=60){
        printf("Grade D");
    }

    else if (marks>=40) {
        printf("Grade E");
    }
    else {
        printf("Fail");
    }

return 0;
}