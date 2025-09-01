#include <stdio.h>
int main(){
    int num1;
    scanf("%d",&num1);
    int sum=0;
    int num2;
    for(int i=num1;i>0;i=i/10){
        num2=i%10;
        sum=sum+num2;
    }
    printf("%d",sum);
    return 0;
}









    
    