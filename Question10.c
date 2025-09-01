#include <stdio.h>

int main(){

    int i, n;
    printf("Enter any Number : ");
    scanf("%d",&n);

    if((n & (n-1)) == 0){
        printf("%d is a power of 2",n);
    }
    else{
        printf("%d is not a power of 2",n);
    }

    return 0;
}