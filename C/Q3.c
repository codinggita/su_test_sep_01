#include <stdio.h>

int main(){
    float a,b,c,d,e;
    printf("Type your marks in 5 subjects out of 100 seperated by space : ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    float percentage = ((a+b+c+d+e)/5.0);
    printf("Percentage : %f\n",percentage);
    if (percentage>=90){
        printf("Grade A+");
    }
    else if (percentage>=80){
        printf("Grade A");
    }
    else if (percentage>=70){
        printf("Grade B");
    }
    else if (percentage>=60){
        printf("Grade C");
    }
    else if (percentage>=50){
        printf("Grade D");
    }
    else if (percentage>=40){
        printf("Grade E");
    }
    else{
        printf("Fail");
    }

    return 0;
}