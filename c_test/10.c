#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    if ((num1&(num1-1))==0){
        printf ("given number is power of 2");
    }
    else {
        printf("not a power of 2");
    }
    return 0;
}