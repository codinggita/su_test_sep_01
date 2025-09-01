#include <stdio.h>

int main() {
    
    char input;
    scanf(" %c", &input);

    if (input >= '0' && input <= '9') {
        printf("number");
    } 
    else if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
        printf("Alphabet");
    } 
    else {
        printf("special symbol");
    }

    return 0;
}
