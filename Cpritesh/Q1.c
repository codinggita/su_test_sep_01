#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter digit,symbols,character: ");
    scanf("%c", &ch);

 
    if (isalpha(ch)) {
        printf("Output: It is a Alphabet\n");
    } else if (isdigit(ch)) {
        printf("Output: It is a Digit\n");
    } else {
        printf("Output: Output: It is a Special Symbol\n");
    }

    return 0;
}

