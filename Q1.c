#include<stdio.h>
int main(){
    char A;
      printf("enter a character- ");
    scanf("%c",&A);
    if(A>=65 && A<=90){
        printf("%c Alphabet",A);
    }
    else if(A>=97 && A<=122){
        printf("Alphabet");
    }
    else if(A>=48 && A<=57){
        printf("Degit");
    }
    else{
        printf("Special Symbol");
    }
    return 0;
}