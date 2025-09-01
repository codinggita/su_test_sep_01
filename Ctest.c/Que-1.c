#include<stdio.h>
int main (){
// Q-1
char a;
scanf("%c",&a);
if('0'<=a<='9'){
    printf("It is a digit.");
}
else if ( a<='A' && a<='Z' || a<='a' && a<='z'){
    printf("It is a alphabet");
}
else{
    printf("It is a special symbol");
}












    return 0;
}