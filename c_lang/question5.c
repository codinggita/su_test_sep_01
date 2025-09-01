#include <stdio.h>

int main(void) {
    long long n, original, reversed = 0;

    printf("Enter a number: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    
    if (n < 0) {
        printf("Negative numbers are not considered palindromes.\n");
        return 0;
    }

    original = n;

    
    while (n != 0) {
        int digit = n % 10;         
        reversed = reversed * 10 + digit; 
        n /= 10;                      
    }

    printf("Reversed number: %lld\n", reversed);

    if (reversed == original) {
        printf("%lld is a palindrome.\n", original);
    } else {
        printf("%lld is not a palindrome.\n", original);
    }

    return 0;
}

   
    
