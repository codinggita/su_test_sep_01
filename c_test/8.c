#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d",&num1, &num2);
    int i=1;
    do {
        if (i==1){
            printf("sum is %d",num1+num2);
        }
        else if (i==2){
            printf("difference is %d",num1-num2);
        }
        else if (i==3){
            printf("product is %d",num1*num2);
        }
        else if (i==4){
            printf("division is %d",num1/num2);
        }
        else{
            break;
        }
        printf("\n");
        scanf("%d",&i);
    }while(i<5);
    return 0;
}