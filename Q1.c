#include<stdio.h>
int main(){
 char ch;
 printf("Enter the value");
 scanf("%c",&ch);
 if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
    printf("Alphabet");
 }
 else if(ch>='0' && ch<='9'){
    printf("digit");
 }

 else{
    printf("Special symbol");
 }

    return 0;
}