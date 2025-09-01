


#include<stdio.h>
int main(){
    int a,b,c,d,e,R;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    R=(a+b+c+d+e)/5;

    printf("Percentage=%d%\n",R);
    if(R>=90){
        printf("A+");
    }
    else if(R>=80){
        printf("Grade=A");
    }
      else if(R>=70){
        printf("Grade=B");
    }
      else if(R>=60){
        printf("Grade=C");
    }
      else if(R>=50){
        printf("Grade=D");
    }
      else if(R>=40){
        printf("Grade=E");
    }
    else{
        printf("Fail");
    }
    return 0;
}