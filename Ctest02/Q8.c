#include<stdio.h>

int main()
{
    float num1, num2;
    char a[10];
    printf("press 1 for Addition.\n");
    printf("press 2 for Subtraction.\n");
    printf("press 3 for Multiplication.\n");
    printf("press 4 for Division.\n");
    scanf("%s",&a);
    do
    {
        printf("Enter first Number: ");
        scanf("%f",&num1);
        printf("Enter second Number: ");
        scanf("%f",&num2);

        if (a[0]=='1')
        {
            printf("Result %f", num1+num2);
        }
        else if (a[0]=='2')
        {
            printf("Result %f", num1-num2);
        }
        else if (a[0]=='3')
        {
            printf("Result %f", num1*num2);
        }
        else if (a[0]=='4')
        {
            printf("Result %f", num1/num2);
        }
        
    } while (a[0]=='E' && a[2]=='x' && a[3]=='i' && a[4]=='t' );
    
  return 0;
}