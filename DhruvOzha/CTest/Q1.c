//Write a C program that accepts a single character from the user and checks whether it is:
#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("%c Alphabet \n", ch);
    }
    else if(ch>='0' && ch<='9'){
        printf("%c Digit \n", ch);
    }
    else{
        printf("%c Special Symbol \n", ch);
    }


    return 0;
}