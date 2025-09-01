#include <stdio.h>
int main () {
    int num ,num2;
    int sum = 0;

    printf("Enter the number:");
    scanf("%d" , & num);

    while (num != 0){
      num2 = num % 10  ;
      sum += num2 ; 
      num = num / 10 ; 
    }

    printf("Sum of the digits is: %d",sum);
    

    return 0;
}