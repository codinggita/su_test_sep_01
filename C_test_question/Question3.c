#include <stdio.h>

int main(){

    int num1,num2,num3,num4,num5;
    int sum=0;
    int per=1;
    printf("Enter First Subject Marks: ");
    scanf("%d",&num1);
    printf("Enter Second Subject Marks: ");
    scanf("%d",&num2);
    printf("Enter Third Subject Marks: ");
    scanf("%d",&num3);
    printf("Enter Fourth Subject Marks: ");
    scanf("%d",&num4);
    printf("Enter Fifth Subject Marks: ");
    scanf("%d",&num5);

    sum=num1+num2+num3+num4+num5;

    per=sum*100/500;

    if(per>=90){
        printf("GRADE A+");
    }
    else if(per>=80 && per<90){
        printf("GRADE A");
    }
    else if(per>=70 && per<80){
        printf("GRADE B");
    }
    else if(per>=60 && per<70){
        printf("GRADE C");
    }
    else if(per>=50 && per<60){
        printf("GRADE D");
    }
    else if(per>=40 && per<50){
        printf("GRADE E");
    }
    else{
        printf("FAIL");
    }







    return 0;
}