#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    float percentage;
    
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    scanf("%d",&num4);
    scanf("%d",&num5);
    int NUMBER;
    NUMBER=num1+num2+num3+num4+num5;
    percentage=(NUMBER/500.0)*100;
    if(percentage>=90){
        printf("Grade A+");
    }else if(percentage>=80){
        printf("Grade A");
    }else if(percentage>=70){
        printf("Grade B");
    }else if(percentage>=60){
        printf("Grade C");
    }else if(percentage>=50){
        printf("Grade D");
    }else if(percentage>=40){
        printf("Grade E");
    }else{
        printf("Fail");
    }
    
    


    return 0;
}