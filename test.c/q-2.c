#include<stdio.h>
int main()
{

   int unit;
   scanf("%d",&unit);

   if(unit<=50){printf("%d",unit*2);}

   else if(unit<=100){printf("%d",50 * 2 + (unit - 50) * 3);}

   else if(unit<=200){printf("%d",50 * 2 + 50 * 3 + (unit - 100) * 4);}

   else if(unit<=300){printf("%d", 50*2 + 50*3 + 50*4 + (unit - 100)*5);}

   else if(unit<=500){printf("%d",50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + (unit - 300) * 6);}

   else if(unit>=500){printf("%d",50 * 2 + 50 * 3 + 100 * 4 + 100 * 5 + 200 * 6 + (unit - 500) * 8);}

   else{printf("fixed charge 100");}
   




    return 0;
}