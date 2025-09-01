#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    int digit;
    int rev;

for(int i=num ; i>0 ; i=i/10){
    digit=i%10;
    reverse=rev*10+digit;
}
if(rev==num){
    printf("given number is pallidrome: %d",rev);
}
else{
    printf("given number is not a pallidrome: %d",rev);
}






    return 0;
}
