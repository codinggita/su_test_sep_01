#include <stdio.h>
int main(){
    char ch;
    printf("Enter the character :");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')) {
        printf("ALPHABET");
    }
    else if(ch>='0' && ch<='9'){
        printf("DIGIT");
    }
    else{
        printf("Special Symbol");
    }
    return 0;
}