#include <stdio.h>

int main() {
    
int sub1,sub2,sub3,sub4,sub5;
    printf("Enter marks of 5 subjects: \n"); 
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    
    float percentage=(sub1+sub2+sub3+sub4+sub5)/5.0;
    
    printf("Grade: ");
    if(percentage >= 90)
        printf("A+\n");
     if(percentage >= 80)
        printf("A\n");
     if(percentage >= 70)
        printf("B\n");
     if(percentage >= 60)
        printf("C\n");
     if(percentage >= 50)
        printf("D\n");
     if(percentage >= 40)
        printf("E\n");
    else
        printf("Fail\n");

    return 0;
}
