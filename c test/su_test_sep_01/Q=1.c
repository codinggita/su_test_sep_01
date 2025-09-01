#include<stdio.h>
int main (){
int digit;
char alphaber,specialsymbol;
scanf("%d",&digit);
scanf("%c,%c",&alphaber,&specialsymbol);
if(digit<=9 && digit>=0){
    printf("A digit");
}else if(alphaber>= 65 && alphaber <= 90){
    printf("An alphabet");
}else if(alphaber>=97 && alphaber<=122){
    printf("An alphabet");
}else{
    printf("A special symbol");
}
    return 0;
}