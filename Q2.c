#include <stdio.h>
int main(){
    int a;
    int b;
    printf("enter the no. of units");
    scanf("%d",&a);
    if (a>=0&&a<=50){
       b=a*2;
       printf("%d",b);
    }
    if(a>=51 && a<=100){
        b=a*3;
        printf("%d",b);
    }
    if(a>=101 && a<=200){
        b=a*4;
        printf("%d",b);
    }
    if(a>=201 && a<=300){
        b=a*5;
        printf("%d",b);
    }
    if(a>=301 && a<=500){
        b=a*6;
        printf("%d",b);
    }
    else
    b=a*8;
    b+=100;
    printf("%d",b);
    
   
    
    return 0;
}
