#include <stdio.h>
int main()
{
int r=0;
int o=n;
while(i>0){
    j=i%10;
    r=r*10+j;
    i/=10;
    }
    if(r==o){
        printf("palindrome %d",r);
    }
    else
        printf("not a palindrome %d",r);
}        