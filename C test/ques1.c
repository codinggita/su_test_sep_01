#include <stdio.h>
int main(){
    char a;
    printf("Type a single character: \n");
    scanf("%c",&a);
    int b;
    printf("Type a number: \n");
    scanf("%d",&b);
    if(a>=A && a<==Z || a>=a && a<=z){
        printf("It is an Alphabet");
    } 
    else if(b>=0 && b<=9){
        printf("It is a digit");
    }
    else{
        printf("A Special symbol");
    }
    return 0;
}