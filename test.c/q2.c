#include<stdio.h>
int main()
{
int unit;
float b=0;
scanf("%d",&unit);
if(unit>=0 && unit<=50){printf("%d",unit*2);}

else if(unit<=100){printf("%d",unit*3);}
else if(unit<=200){printf("%d",unit*4);}
else if(unit<=300){printf("%d",unit*5);}
else if(unit<=500){printf("%d",unit*6);}
else if(unit>=500){printf("%d",unit*6);}
else{printf("100 fixed charge");}





























    return 0;
}