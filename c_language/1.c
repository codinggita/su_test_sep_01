#include <stdio.h>
int main (){
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    int b = (int)ch;
    

    if((b>=65 && b<=90) || (b>=97 && b<=122)){
        printf("Alphabet");
    }
    else if(b>=48 && b<=57){
        printf("digit");
    }
    else{
        printf("Special charater");
    }



 return 0;
}