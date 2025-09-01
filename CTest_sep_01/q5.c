#include <stdio.h>
int main()
{  
    int num;
    scanf("%d",&num);
    int digit ;
    int result = 0;
    int original = num;
    int i = num;
    while(i>0)
    {digit = num%10;
    result = result*10+digit;
    i = i/10;}
    
    
    if(original == result)
    {printf("it is a palidrome%d\n",result);}
    else {printf("nope");}
    return 0;
}