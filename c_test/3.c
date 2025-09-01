#include <stdio.h>
int main(){
    int maths, sci, sst, eng, hin;
    printf("Enter science marks: ");
    scanf("%d",&sci);
    printf("Enter english marks: ");
    scanf("%d",&eng);
    printf("Enter hindi marks: ");
    scanf("%d",&hin);
    printf("Enter sst marks: ");
    scanf("%d",&sst);
    printf("Enter mathematics marks: ");
    scanf("%d",&maths);
    float percent =(sst+maths+eng+hin+sci)/5;
    printf("%f\n",percent);
    if (percent>=90){
        printf("grade A+");
    }
    else if (percent>=80){
        printf("grade A");
    }
    else if (percent>=70){
        printf("grade B");
    }
    else if (percent>=60){
        printf("grade C");
    }
    else if (percent>=50){
        printf("grade D");
    }
    else if (percent>=40){
        printf("grade E");
    }
    else {
        printf("Fail");
    }
    return 0;
}