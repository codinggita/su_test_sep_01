#include<stdio.h>
int main(){

int a,b,c,d,e;
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
int sum=a+b+c+d+e;
int div=sum/500;
int total=div*100;

if(a>=90){
    printf("A+");
}
else if(a>=80){
    printf("A");
}
else if(a>=70){ 
    printf("B");
}
else if(a>=60){
    printf("C");
}
else if (a>=50){
    printf("D");
}
else if(a>=40){
   printf("E");
}
else{
    printf("Fail");
}


}