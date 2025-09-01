#include <stdio.h>

int main()
{
    int a;
    int sum=0;
int upd;
    int digit;
    scanf("%d",&a);
    while(a!=0){
       upd=a/10; 
         digit=a%10;
         sum=sum+digit;
         a=upd;
    }
    printf("%d",sum);
    return 0;
}

