#include <stdio.h>
int main(){
    int num,sum = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    int total;
   
    int i = num;
        while( i > 0){
          
            total = i%10;
            sum = sum+total;
             i = i / 10;
        }
          printf("%d", sum);
    return 0;
}