#include<stdio.h>
int main(){

    int num;
    scanf("%d",&num);
    int total=1;

    for(int i=1; i<=num; i++){
        total=total*i;
       
    }
     printf("%d",total);
}