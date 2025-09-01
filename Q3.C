#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,total;

    printf("enter the mark \n");
    scanf(" %d %d %d %d %d ", &s1 , &s2 , &s3 , &s4 , &s5 );
    int sum = s1+s2+s3+s4+s5;
    int percentage = sum/5;
    if(percentage>=90){
        printf("A+");
    }
    if(percentage>=80){
        printf("A");
    }
    if(percentage>=70){
        printf("B");
    }
    if(percentage>=60){
        printf("C");
    }
    if(percentage>=50){
        printf("D");
    }
    if(percentage>=40){
        printf("E");
    }
    else{
        printf("FAIL");
    }


    return 0;
}