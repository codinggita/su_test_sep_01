#include <stdio.h>
int main(){
char a;
scanf("%c",&a);
if(a>=65 && a<=90 || a>=90 &&  a<=122){
    printf("Alphabet");
}
else if(a>=50 && a<=57){
    printf("Digit");
}
else{
 printf("Special Symbol");
}
    return 0;
}