/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a>=65 && a<=97){
        printf("Alaphabet");
    }
    else if(a=0 && a<=9){
        printf("a is number");
    }
    else{
        printf("a is symbol");
    }
    
    return 0;
}