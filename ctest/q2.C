#include<stdio.h>
int main(){
    int i;
    int product =1;
    scanf("%d",&i);
    if(i<=50){
         product = product*i*2+100; 
        printf("%d\n",product);
    }
    if(i>50 && i<=100){
         product = product*i*3+100; 
        printf("%d\n",product);
    }
     if(i>100 && i<=200){
         product = product*i*4+100; 
        printf("%d\n",product);
    }
     if(i>200 && i<=300){
         product = product*i*5+100; 
        printf("%d\n",product);
    }
    if(i>300 && i<=500){
         product = product*i*6+100; 
        printf("%d\n",product);
    }
    if(i>500){
         product = product*i*8+100; 
        printf("%d\n",product);
    }
   
    return 0;
}