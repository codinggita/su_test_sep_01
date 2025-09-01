#include<stdio.h>

int main(){

    int a,b,c,d,e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);

    int sum=a+b+c+d+e;
    int percentage=(sum*100)/500;

    if(percentage>=90){
        printf("%d",percentage);
        printf("Grade A+");
    }
    else if(percentage>=80){
        printf("%d",percentage);
        printf("Grade A");
    }
     else if(percentage>=70){
        printf("%d",percentage);
        printf("Grade B");
    }
     else if(percentage>=60){
        printf("%d",percentage);
        printf("Grade C");
    }
     else if(percentage>=50){
        printf("%d",percentage);
        printf("Grade D");
    }
     else if(percentage>=40){
        printf("%d",percentage);
        printf("Grade E");
    }
     else{
        printf("%d",percentage);
        printf("Fail.");
    }




    return 0;
}