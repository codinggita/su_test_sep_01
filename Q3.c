#include<stdio.h>
int main(){



float a ,b,c,d,e;
float f=0;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
scanf("%f",&d);
scanf("%f",&e);
f=a+b+c+d+e;
printf("%f\n",f);
f=f/500;
printf("%f\n",f);
f=f*100;
printf("%\n",f);
if(f>=90){
    printf("Grade A+");
}
if(f>=80){
    printf("Grade A");
}
if(f>=70){
    printf("Grade B");
}
if(f>=60){
    printf("Grade C");
}
if(f>=50){
    printf("Grade D");
}
if(f>=40){
    printf("Grade E");
}
if(f<40){
    printf("Fail");
}















    return 0;
}