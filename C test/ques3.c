#include <stdio.h>
int main(){
    int a;
    printf("Enter your marks (in percentage): \n");
    scanf("%d",&a);
    if(a>=90){
        printf("Grade A^+");
    }
    else if(a>=80){
        printf("Grade A");
    }
    else if(a>=70){
        printf("Grade B");
    }
    else if(a>=60){
        printf("Grade C");
    }
    else if(a>=50){
        printf("Grade D")
    }
    else if(a>=40){
        printf("Grade E");
    }
    else{
        printf("Fail");
    }
    return 0;
}