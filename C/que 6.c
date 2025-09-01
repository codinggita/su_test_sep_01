#include <stdio.h>
int main ()
{

    int a;
    printf("Enter yout numner ");
    scanf("%d",a);
    int sum = 0;
    int c;


    while (a>0){
       
        c= a%10;
        sum += c;
        a /=10 ;
    }
     printf("%d",sum);



    return 0;
}