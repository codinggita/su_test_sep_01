#include<stdio.h>
int main()
{
    char a;
    printf("Enter thee value : ");
    scanf("&d",&a);
    if(a>=65 && a<=90 || a<=122){
        printf("Alphabat");
    }
    else if(a>=48 && a>=57){
        printf("Digit");
    }
    else{
        printf("Special Symbol");
    }




  return 0;
}