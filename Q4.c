#include<stdio.h>
int main (){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    int mul = 1;
    for(int i  = 1 ; i<=n ;i++){
        mul = mul * i;

    }
    printf("The Factoreal Is %d\n",mul);
}