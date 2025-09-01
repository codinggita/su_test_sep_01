#include <stdio.h>
int main(){
int a;
scanf("%d",&a);

if((a & (a-1))==0)
printf("it is power of 2");
else 
printf("it is not poweer of 2");




    return 0;
}