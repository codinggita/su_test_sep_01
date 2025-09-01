#include <stdio.h>
int main () {

    int g1,g2,g3,g4,g5;
    scanf("%d%d%d%d%d",&g1,&g2, &g3, &g4, &g5);
    int sum = g1+g2+g3+g4+g5;
    int per = sum/5;
    if(per>=90){
        printf("The Grade is A+");
    }
     else if (per>=80){
        printf("The Grade is A");
    }
     else if(per>=70){
        printf("The Grade is B");
    }
     else if(per>=60){
        printf("The Grade is C");
    }
     else if(per>=50){
        printf("The Grade is D");
    }
     else if(per>=40){
        printf("The Grade is E");
    }
    else {
        printf("You are fail.");
    }








    return 0;
}
