#include <stdio.h>
int main(){
    int a, c,d,e,f,g,j,i,k,h;
  int b;
    scanf("%d",&a);
    if(a>=0 && a<=50){
      b=  a*2 +100;
      printf("%d",b);
    }
    else if(a>=51 && a<=100){ 
        d= a*3 +100;
        printf("%d",d);
    }
    else if(a>=101 && a<=200){

        g= a*4 +100 ;
        printf("%d",g);
    }
    else if(a>=201 && a<=300){
       
        i= a*5 +100 ;
        printf("%d",i);
    }
    else if(a>=301 && a<=500){

        k= a*6 +100 ;
        printf("%d",k);
    }
    else if(a>500){
        h= a*8 +100;
        printf("%d",h);
    }
    else{
        printf("Invalid");
    }
    return 0;
}