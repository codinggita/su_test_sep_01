#include <stdio.h>
int main (){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int result =1;
    for(int i =1; i<=num; i++){
        result = result*i;
       
    }
    printf("the factorial of %d is : %d",num ,result);
    return 0;
}