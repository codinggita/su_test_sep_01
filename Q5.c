#include <stdio.h>

int main() {
    int num, true, last;
    int reversed = 0;
   
    printf("Enter a number: ");
    scanf("%d", &num);

   true= num;  
    
    while (num != 0) {
        last = num % 10;            
        reversed = reversed * 10 + last;
        num = num / 10;                  
    }

    printf("Reversed Number = %d\n", reversed);

    if (true == reversed) {
        printf("%d is a Palindrome.\n", true);
    } else {
        printf("%d is NOT a Palindrome.\n", true);
    }

    return 0;
}
