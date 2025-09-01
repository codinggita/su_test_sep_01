#include <stdio.h>

int main(){
    int a;
    printf("Number : ");
    scanf("%d",&a);
    int b;
    int c=0;
    int d=a;
    while(d>0){
        b=d%10;
        c=(c*10)+b;
        d=d/10;
    }
    if(a==c){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}