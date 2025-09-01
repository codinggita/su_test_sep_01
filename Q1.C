#include<stdio.h>

int main(){

    char ch;
    printf("Enter your charactor.");
    scanf("%c",&ch);
    int b=(char)ch;
    

    if((ch>='A'&& ch<='Z') || (ch>='a'&& ch<='z')){
        printf("Alphabet.");
    }
    else if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("special symbol.");
    }






    return 0;
}