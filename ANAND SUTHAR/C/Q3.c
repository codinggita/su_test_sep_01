#include <stdio.h>

int main()
{
   float phy,che,mat,eng,com;
    printf("ENTER MARKS(OUTOF 100)\n");
    printf("Physics :");
    scanf("%f",&phy);
    printf("Chemistry :");
    scanf("%f",&che);
    printf("Maths :");
    scanf("%f",&mat);
    printf("English :");
    scanf("%f",&eng);
    printf("Computer :");
    scanf("%f",&com);
    
    float sum = phy+che+mat+eng+com;
    float per = sum/500.0*100;
    printf("Percentage = %.2f\n",per);
    
    if(per>=90){
        printf("Grade A+");
    }
    else if(per>=80){
        printf("Grade A");
    }
    else if(per>=70){
        printf("Grade B");
    }
    else if(per>=60){
        printf("Grade C");
    }
    else if(per>=50){
        printf("Grade D");
    }
    else if(per>=40){
        printf("Grade E");
    }else{
        printf("Fail");
    }
    return 0;
}