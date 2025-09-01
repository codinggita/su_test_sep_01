#include <stdio.h>


int main() {
    char ch;

    
    printf("Enter character: ");
    scanf("%c", &ch);

    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf(" alphabet.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf(" is a digit.\n");
    } else {
        printf(" is a special symbol.\n");
    }

    return 0;
}
    
     
     
