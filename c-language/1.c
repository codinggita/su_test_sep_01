#include <stdio.h>
int main() {


    int  digit ; 
    char alphabet,special;
    printf("enter the a digit =");
    scanf("%d",&digit );
    printf("enter the a digit =");
    scanf("%c",&alphabet ,&special );

    

    if (digit>=0 && digit<=9){
        printf("Digit");
    }
    else if(alphabet>=65 && alphabet<=90){
        printf("Alphabet");
    }
     else if(alphabet>=97 && alphabet<=122){
        printf("Alphabet");
    }
      else{
        printf("Special Symbol");
      }

return 0;
}