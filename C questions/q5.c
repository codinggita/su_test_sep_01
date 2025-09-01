#include <stdio.h>

int main () {
    
    int num, digi, reverse = 0;
    scanf("%d", &num);

    int i = num;
    while(i > 0) {

        digi = i % 10;
        reverse = reverse*10 + digi; 
        i = i / 10;

    }

    if (reverse == num) {
        printf("pallindrome");
    }
    else {
       printf("Not Pallindrome");
    }


    return 0;
}