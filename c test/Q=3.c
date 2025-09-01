#include<stdio.h>
int main (){
    int grade1, grade2, grade3, grade4, grade5;
    float sum, percentage;
    printf("Enter 5 grades separated by spaces: ");
    scanf("%d %d %d %d %d", &grade1, &grade2, &grade3, &grade4, &grade5);

    sum = grade1 + grade2 + grade3 + grade4 + grade5;
    percentage = (sum / 500) * 100;

    if(percentage >= 90){
        printf("A+");
    }else if(percentage >= 80){
        printf("A");
    }else if(percentage >= 70){
        printf("B");
    }else if(percentage >= 60){
        printf("C");
    }else if(percentage >= 50){
        printf("D");
    }else if(percentage >= 40){
        printf("E");
    }else{
        printf("Fail");
    }
    return 0;
}