#include<stdio.h>
int main(){
    int num,degit,R=0;
    printf("Please enter a number-");
    scanf("%d",&num);
   
    int i=num;
    while(i>0){
        degit=i%10;
        R=R+degit;
        i/=10;
    }
    printf("Sum od digit=%d",R);
   return 0;
}