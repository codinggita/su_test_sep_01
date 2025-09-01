/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int number;
    printf("ENTER THE NUMBER HERE : ");
    scanf("%d",&number);
    int i=number;
    int sum=0;
    while(i>0)
    {
        int digit=i%10;
        sum=digit+i;
        i=i/10;
    }
        printf("%d",sum);

    return 0;
}