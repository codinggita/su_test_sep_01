#include <stdio.h>

int main()
{  
    int num;
    scanf("%d",&num);
    int digit ;
    int result = 0;
    int i = num;

    while(i>0)
    {digit = i%10;
    result = result + digit;
    i = i/10;}
    
    printf("%d",result);
    
    
    return 0;
}