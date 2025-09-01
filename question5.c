


#include <stdio.h>
int main(){
    int num, reversedNum = 0, remainder;
    printf("Enter an integer number : ");
    scanf("%d", &num);
    int originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    printf("the reversed number is : %d\n", reversedNum);
    printf("the original number is : %d\n", originalNum);
    if (originalNum == reversedNum) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    return 0;
}