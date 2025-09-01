#include <stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    float p= (s1+s2+s3+s4+s5)/5;
    printf("Percentage = %f\n",p);
    if (p>=0){
        if(p>=90){
            printf("Grade A+");
        }
        else if (p>=80){
            printf("Grade A");
        }
        else if (p>=70){
            printf("Grade B");
        }
        else if (p>=60){
            printf("Grade C");
        }
        else if (p>=50){
            printf("Grade D");
        }
        else if (p>=40){
            printf("Grade E");
        }
        else{
            printf("Fail");
        }
    }
    return 0;
}