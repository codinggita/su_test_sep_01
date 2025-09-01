#include <stdio.h>

int main(){

    int num_1,num_2,method,main_num;

    printf("input method (1-addition , 2-subtraction , 3-multiplication , 4-division , 0-exit) : ");
    scanf("%d", &method);

    if (method != 0)
    {
    printf("Enter two numbers : ");
    scanf("%d %d", &num_1,&num_2);
    
        switch (method)
    {
    case 1:
        main_num = num_1 + num_2 ;
        break;
    case 2:
        main_num = num_1 - num_2 ;
        break;
    case 3:
        main_num = num_1 * num_2 ;
        break;
    case 4:
        main_num = num_1 / num_2 ;
        break;
    
    default:
        printf("invalid input");
        break;
    }

    printf("%d", main_num);    
    }
    else
    {
        printf("exited");
    }
    
    return 0;
}