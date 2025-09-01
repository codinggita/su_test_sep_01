#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if ((a>='A' && a<='Z') || (a>='a' && a<='z')) { 
        printf("alphabet");
    }
    else if(a>=0 && a<9 ){
        printf("digit");
    } 
    else{
        printf("special symbol");
    }
 return 0;   
}