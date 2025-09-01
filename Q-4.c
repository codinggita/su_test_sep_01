/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    int a;
    int b;
    int result =1;
    scanf("%d",&b);
    for(a=1;a<=b;a=a+1){
        result=result*a;
    }
    printf("%d",result);
    return 0;
}