#include<stdio.h>

int main(){
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    int total=a+b+c+d+e;
    float per=(total/500.0)*100;
    printf("Total: %d \n", total);
    printf("Percentage: %.2f \n", per);
    if(per>=90){
        printf("Grade A+ \n");
    }
    else if(per>=80){
        printf("Grade A \n");
    }
    else if(per>=70){
        printf("Grade B \n");
    }
    else if(per>=60){
        printf("Grade C \n");
    }
    else if(per>=50){
        printf("Grade D \n");
    }
    else if(per>=40){
        printf("Grade E \n");
    }
    else{
        printf("Fail \n");
    }
      return 0;
}