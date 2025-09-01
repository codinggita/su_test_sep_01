#include<stdio.h>
int main (){
int num;
int fact;
scanf("%d",num);
scanf("%d",fact);

for(int i = 1;i >= num ; i++){
    fact*=i;
    printf("factorial of %d is %d\n",num,fact);
}
    return 0;
}