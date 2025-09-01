#include <stdio.h>

int main(){

    int s1, s2, s3, s4, s5, percentage=0;
    printf("Enter Marks of 5 Subjects : ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    percentage=(s1+s2+s3+s4+s5)/5;
    printf("Percentage : %d%\n",percentage);

    if(percentage>=90){
        printf("Grade A+");
        if(percentage>=80){
            printf("Grade A");}
            if(percentage>=70){
            printf("Grade B");}
            if(percentage>=60){
            printf("Grade C");}
            if(percentage>=50){
            printf("Grade D");}
            if(percentage>=40){
            printf("Grade E");}
        }
    
    else{
        printf("Fail");
    }

    return 0;
}