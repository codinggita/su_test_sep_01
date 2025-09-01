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
    if (a=0 && a<=50){
        printf("2 per unit");
    }
    else if(a>50 && a<=100){
        printf("3per unit");
    }
    else if(a>100 && a<=200){
        printf("4 per unit");
    }
     else if(a>200 && a<=300){
        printf("5 per unit");
    }
     else if(a>300 && a<=500){
        printf("6 per unit");
    }
    else if(a>500){
        printf("8 per unit");
    }
    printf("%d",a);
    return 0;
}