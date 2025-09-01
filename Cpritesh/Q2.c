#include <stdio.h>
int main(){
int n;
printf("Enter the electricity in units:");
scanf("%d",&n);

if( n>=0 && n<=50){
    printf("%d\n",n*2);
}

else if( n>=50 && n<=100){
        printf("%d\n",n*3);
    }
else if( n>=100 && n<=200){
        printf("%d\n",n*4);
    }
else if( n>=200 && n<=300){
        printf("%d\n",n*5);
    }
  else if( n>=300 && n<=500){
        printf("%d\n",n*6);
    }
    else{
        printf("%d",n*8);
    }





    return 0;
}