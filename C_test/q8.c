#include <stdio.h>

int main()
{
    int num1, num2;
    char opration;
     
    do{
        scanf("%d %c %d",&num1, &opration, &num2);
        if(opration=='+'){
            printf("%d\n", num1+num2);
        }
        else if(opration=='-'){
            printf("%d\n", num1-num2);
        }
        else if(opration=='*'){
            printf("%d\n", num1*num2);
        }
        else if(opration=='/'){
            if(num2!=0){
                printf("%d\n", num1/num2);
            }
            else{
                printf("We can't divide any num by 0\n");
            }
        }
        else{
            printf("Enter a valid input\n");
        }
    } while ((opration=='+')||(opration=='-')||(opration=='*')||(opration=='/'));
    
    return 0;
}