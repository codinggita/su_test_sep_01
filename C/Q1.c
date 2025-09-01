#include <stdio.h>

int main(){
    char a;
    printf("Type a character : ");
    scanf("%c",&a);
    int b=(int)a;

    if((65<=b && b<=90) || (97<=b && b<=122) ){
        printf("Alphabet");
    }
    else if(48<=b && b<=57){
        printf("Digit");
    }
    else{
        printf("Special Symbol");
    }

    return 0;
}