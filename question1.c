#include <stdio.h>
int main(){

char a;
scanf(" %c",&a);
int b=( int)a;
if(a>=65 & a<=125){
printf("its a character");}
else if (a>=48 & a<=57)
printf("its a number");
else
{
printf("its specail symbol");
}




return 0;
}