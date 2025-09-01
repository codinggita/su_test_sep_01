#include <stdio.h>

int main(){
    int a;
    printf("Type a number : ");
    scanf("%d",&a);
    int count=1;
    for(int i=1;i<=a;i++){
        count=count*i;
    }
    printf("%d",count);

    return 0;
}