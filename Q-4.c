#include <stdio.h>
int main(){
int fact;
    int result=1;
    printf("enter the number:");
    scanf("%d",&fact);
    for(int i=1;i<=fact;i++){
        result=result*i;
    }
    printf("factorial of the %d = %d",fact,result);
    
    
    
    return 0;
}