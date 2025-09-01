/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    int input,temp
    int i=input;
    while(i > 0)
    {
     temp = i%10;
    i = i/10;
        digit=temp*temp*temp;
        digit=digit*cube;
    }
    if(digit == input){
        printf("Armstrong number");
    }
    else{
        printf("not Armstrong number");
    }
    printf("%d",digit);
    return 0;
}