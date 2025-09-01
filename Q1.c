#include <stdio.h>
int main (){
    printf("Enter A Character : ");
    char n;
    int x = n;
    scanf("%c",&n);
  if( n >=65 &&  n <=122){
    printf("An Alphabet\n");
  }
  else if(n>=48 && n<=57){
    printf("A Number\n");
  }
  else{
    printf("Special Symbol");
  }

}