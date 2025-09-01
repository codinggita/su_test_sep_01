

     #include <stdio.h>

int main() {
    char ch;

    
    printf(" single character: ");
    scanf("%c", &ch);

    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("'%c' : Alphabet.\n", ch);
    }
    
    else if (ch >= '0' && ch <= '9') {
        printf("'%c' : Digit.\n", ch);
    }

    else {
        printf("'%c' : Special Symbol.\n", ch);
    }

    return 0;
}

     


