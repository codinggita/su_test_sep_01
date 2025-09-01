#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    float f=a+b+c+d+e;
    float g=f*100;
    float h=g/500;
    if(h>=90){
        printf("Grade A+");
    }
    else if(h>=80&&h<90){
        printf("Grade A");
    }
    else if(h>=70&&h<80){
        printf("Grade B");
    }
    else if(h>=60&&h<70){
        printf("Grade C");
    }
    else if(h>=50&&h<60){
        printf("Grade D");
    }
    else if(h>=40&&h<50){
        printf("Grade E");
    }
    else{
        printf("FAIL");
    }

    return 0;
}