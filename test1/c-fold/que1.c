#include <stdio.h>
int main (){
    char a;
    printf("Enter a char\n");
    scanf("%c",&a);
  
  
    if (a>=65 && a<=91 || a>=97 && a<=122 )
    {
       printf("An alphabet"); 
       
    } 
    else if (a=='0' || a=='1' || a=='2' ||a=='3' || a=='4' || a=='5' || a=='6'|| a=='7'|| a=='8'|| a=='9')
    {
      printf("A digit");
    } else {
        printf("A special symbol");
    }
 return 0;   
}