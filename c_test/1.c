#include <stdio.h>
int main(){
    printf("enter your character: ");
    char ch;
    int i;
    scanf ("%c",&ch);
     i = (int) ch; 
    if (i>=97 && i<=122 ){
        printf("alphabet");
    }
    else if (i>=65 && i<=90 ){
        printf("alphabet");
    }
    else if (i>=48 && i<=57 ){
        printf("digit");
    }
    else {
        printf("special synbol");
    }
return 0;    
}