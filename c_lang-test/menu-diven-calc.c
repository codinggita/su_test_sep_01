#include <stdio.h>
int main(){
    int i = 1;
    do{
        int ch,num1,num2;
        printf("Enter you choice 1(add) 2(sub) 3(multi) 4(div):");
        scanf("%d",&ch);
        printf("Enter two numbers:");
        scanf("%d",&num1);
        scanf("%d",&num2);
        int calc;
        switch(ch){
            case 1: calc = num1 + num2;
                    break;
            case 2: calc = num1 - num2;
                    break;
            case 3: calc = num1 * num2;
                    break;
            case 4: calc = num1 / num2;
                    break;
            default: printf("invalid input");
                    break;
        }
        printf("Calculation:%d\n",calc);
        i++;
        int j ;
        printf("Enter 0(Exit) if you want to exit:");
        scanf("%d",&j);
        if(j == 0)
        {
            i = j;
        }
    }while(i > 0);

    return 0;
}