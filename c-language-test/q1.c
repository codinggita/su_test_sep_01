#include <stdio.h>

int main()
{
   char input;
   scanf("%c",&input);
   printf("%d",input);
   if((input>=65 && input<=90)||(input>=97 && input<=122))
   {printf("alphabet \n");}
   else if(input>=48 && input<=57)
   {printf("digit");}
   else
   {printf("special symbol");}
   
       
   

    return 0;
}