#include <stdio.h>
int main(){
int b;
int c;
int d;
int e;
int f;

scanf(" %d %d %d %d %d",&b, &c ,&d, &f, &e);
int percent =  (((b+c+d+e+f)/500)*100);

if(percent>=90)
printf("A+");
else if(percent>=80)
printf("A");
else if(percent>=70)
printf("B");
else if(percent>=60)
printf("C");
else if (percent>=50)
printf("D");
else if(percent>=40)
printf("E");
else
printf("fail");




    return 0;
}