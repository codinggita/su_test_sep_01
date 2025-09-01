#include<stdio.h>
int main(){
int a;
printf("Enter your units");
scanf("%d",&a);
if(a<=50){
    printf("%d",a*2+100);
}
else if(a>=51 && a<=100){
    printf("%d",a*3-50+100);
}
else if(a>=101 && a<=200){
    printf("%d",a*4-150+100);
}
else if(a>=201 && a<=300){
    printf("%d",a*5-350+100);
}
else if(a>=301 && a<=500){
    printf("%d",a*6-650+100);
}
else{
    printf("%d",a*8-1650+100);
}

    return 0;
}