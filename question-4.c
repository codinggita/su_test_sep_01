#include <stdio.h>
int main (){
    int num;
    int result=1;
    scanf("%d",&num);
    for (int i=1; i<=num; i++){
        result=result*i;
    }
    printf("factorial=%d",result);
    return 0;
}