#include<stdio.h>
int main(){

int a;
scanf("%d",&a);
int total;

if(a>=0 && a<=50){
    total=a*2;
    printf("%d",total);
}
else if(a>=51 && a<=100){
    total=a*3;
    printf("%d",total);
}
else if(a>=101 && a<=200){
    total=a*4;
    printf("%d",total);
}
else if(a>=201 && a<=300){
    total=a*5;
    printf("%d",total);
}
else if (a>=301 && a<=500){
    total=a*6;
    printf("%d",total);
}
else{
    total=a*8;
    printf("%d",total);
}


}
