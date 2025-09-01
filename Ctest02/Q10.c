#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if((n & (n-1)) == 0){
        printf("Power of 2");
    }
    else {
        printf("not power of 2 ");
    }

    return 0;
}