#include <stdio.h>

int main()
{
    int num1;
    int num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    int user;
    scanf("%d",&user);
    int result = 0;
    printf("enter which operator you want + , - , / , *");
    int i =1;
    char op;
    scanf("%c",&op);
    do{
        if(op == '+')
        result = num1+num2;
        else if(op == '-')
        result = num1-num2;
        else if(op == '/')
        result = num1/num2;
        else 
        result = num1*num2;
        i ++;
    }
    while (i<= user);
    return 0;
}