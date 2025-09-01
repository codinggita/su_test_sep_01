/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char sign;
    printf("ENTER THE OPERATION U WANT HERE : ");
    scanf("%c",&sign);
    int a;
    int b;
    printf("ENTER THE TWO NUMBER HERE : ");
    scanf("%d",&a);
    scanf("%d",&b);
    int i;
    do
    {
        if(sign='+')
        {
            i=a+b;
        }
        else if(sign='-')
        {
            i=a-b;
        }
        else if(sign='*')
        {
            i=a*b;
        }
        else if(sign='/')
        {
            i=a/b;
        }
        else
        {
            printf("ENTER A VALID OPERATORS");
        }
    printf("ANSWER IS %d\n",i);
    break;
    }
    while(sign!='+' || sign!='-' || sign!='*' || sign!='/');
    {
        
      
        
    }

    return 0;
}