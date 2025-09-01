#include<stdio.h>
int main (){
int a;
int b=0;
int c;
scanf("%d",&a);
while(a>0){
    c=a%10;
    b+=c;
a=a/10;
}
printf("%d",b);
    return  0;
}