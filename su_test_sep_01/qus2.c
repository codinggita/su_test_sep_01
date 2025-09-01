#include <stdio.h>

int main() {
  int a;
scanf("%d",&a);


if(a>=0 && a<=50){
   int bill=(a*2)+100;
   printf("%d",bill);
}

 else if(a>=51 && a<=100){
   int bill=(a*3)+100;
   printf("%d",bill);
}


 else if(a>=101 && a<=200){
   int bill=(a*4)+100;
   printf("%d",bill);
}


else if(a>=201 && a<=300){
   int bill=(a*5)+100;
   printf("%d",bill);
}


else if(a>=301 && a<=500){
   int bill=(a*6)+100;
   printf("%d",bill);
}

else{
    int bill=(a*8)+100;
   printf("%d",bill);
}









    return 0;
}