#include <stdio.h>

int main(){

    int i;
    printf("Enter Number Of Electricity Units Consumed By A Customer : ");
    scanf("%d",&i);

    if(0<=i && 50>=i){
        printf("%d ",i*2+100);
    }
    else if(51<=i && 100>=i){
        printf("%d ", i*3+100);
    }
    else if(101<=i && 200>=i){
        printf("%d ", i*4+100);
    }
    else if(201<=i && 300>=i){
        printf("%d ", i*5+100);
    }
    else if(301<=i && 500>=i){
        printf("%d ", i*6+100);
    }
    else if(500<=i){
        printf("%d", i * 8 + 100);
    }
    
    return 0;
}