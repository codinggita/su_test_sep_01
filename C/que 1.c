#include <stdio.h>

int main()
 {

    char c;
    scanf("%c",&c);

    if ((c>= 'A' && c<='Z') || (c>= 'a' && c<= 'z')) {
        printf("%c is an alphabate\n",c);
    }
    else if (c>= '0' && c<= '9'){
        printf (" '%c' is number");
    }
    else {
        printf("special Number");
    }
    return 0;
}

