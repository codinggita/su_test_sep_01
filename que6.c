#include<stdio.h>
 int main(){
    int i=1;
    int num=1;
    int sum=0;
    printf("Enter a positive number",num);
    scanf("%d",&num);
    while (i<=num){
        i++;
        sum+=i;
    }
    printf("%d",sum);
        
    }
    
 