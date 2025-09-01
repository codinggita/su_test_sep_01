#include <stdio.h>
int main(){
int m;
printf("Enter a number: ");
scanf("%d", &m);
if((m & (m-1))==0){
    printf("The no is power of 2");
}
else {
    printf("The no is not power of 2");
}

    return 0;
}