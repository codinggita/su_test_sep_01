#include <stdio.h>
int main(){
    int num,c=0,sum=0;
    scanf("%d",&num);
    while(num!=0){
        sum=sum+num;
        c++;
        scanf("%d",&num);
    }
    printf("%d\n",c);
    printf("%d is the sum\n",sum);
    printf("%d is the avg\n",sum/c);
    return 0;
}