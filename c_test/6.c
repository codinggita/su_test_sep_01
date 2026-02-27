#include <stdio.h>
int main(){
    int num, b,res=0;
    scanf("%d",&num);
    int i=num;
    while ( i>0){
        b=i%10;
        res=res+b;
         i=i/10;
    }
        printf("%d",res);
    return 0;
}