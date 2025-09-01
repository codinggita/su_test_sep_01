#include <stdio.h>
int main(){
int marks1,marks2,marks3,marks4,marks5;

    printf("enter the marks of the subject 1:");
    scanf("%d",&marks1);
    printf("enter the marks of the subject 2:");
    scanf("%d",&marks2);
    printf("enter the marks of the subject 3:");
    scanf("%d",&marks3);
    printf("enter the marks of the subject 4:");
    scanf("%d",&marks4);
    printf("enter the marks of the subject 5:");
    scanf("%d",&marks5);
    int avg=marks1+marks2+marks3+marks4+marks5/5;
    
    if(avg>=90){
        printf("Grade A+");
    }
    else if(avg>=80){
        printf("Grade A");
    }
    else if(avg>=70){
        printf("Grade B");
    }
     else if(avg>=60){
        printf("Grade C");
    }
    else if(avg>=50){
        printf("Grade D");
    }
    else if(avg>=40){
        printf("Grade E");
    }
    else{
        printf("fail");
    }

    return 0;
}