#include<stdio.h>
int main(){
int num;
int b;
int sum=0;
scanf("%d",&num);
int i=0;
while(num>0){
b=num%10;
sum=sum+b;
num=num/10;
i++;}
printf("%d",sum);


return 0;
}


