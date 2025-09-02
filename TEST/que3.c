#include <stdio.h>
int main(){
    int sub1 = 0;
    int sub2 = 0;
    int sub3 = 0;
    int sub4 = 0;
    int sub5 = 0;
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
    float total = sub1+sub2+sub3+sub4+sub5;
    float per = total /5;
    printf("The total adition is :%.1f\n",total);
    printf("The Percentage is :%.1f\n",per);

    if(per>=90){
        printf("GRADE A+");
    }
    else if(per>=80){
        printf("GRADE A");
    }
    else if(per>=70){
        printf("GRADE B");
    }
    else if(per>=60){
        printf("GRADE C");
    }
    else if(per>=50){
        printf("GRADE D");
    }
    else if(per>=40){
        printf("GRADE E");
    }
    else{
        printf("FAIL");
    }
    return 0;
}