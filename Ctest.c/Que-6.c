#include<stdio.h>
int main(){
int num;
scanf("%d",&num);
int sum = 0;
int i =num;
while(i>0){
    int digit = i % 10;
sum = sum + digit ;
i=i/10;
}
printf("%d",sum);



    return 0;
}