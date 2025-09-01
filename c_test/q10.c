#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    if((num1 & (num1-1)) == 0){
        printf("it is a power of 2");
    }
    else{
        printf("it is not a power of 2");
    }
    return 0;
}