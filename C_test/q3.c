#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sum4, sum5;
    printf("Enter Marks os subject 1: ");
    scanf("%d",&sub1);
    printf("Enter Marks os subject 2: ");
    scanf("%d",&sub2);
    printf("Enter Marks os subject 3: ");
    scanf("%d",&sub3);
    printf("Enter Marks os subject 4: ");
    scanf("%d",&sum4);
    printf("Enter Marks os subject 5: ");
    scanf("%d",&sum5);
     
    float percent= (float)(sub1+sub2+sub3+sum4+sum5)/5.0;

     printf(" Percentage =%f\n",percent);

    if(percent>=90){
        printf("Grade A+");
    }

    else if(percent>=80){
        printf("Grade A");
    }

    else if(percent>=70){
        printf("Grade B");
    }

    else if(percent>=60){
        printf("Grade C");
    }

    else if(percent>=50){
        printf("Grade D");
    }

    else if(percent>=40){
        printf("Grade E");
    }

    else{
        printf("Fail");
    }

    

    return 0;
}