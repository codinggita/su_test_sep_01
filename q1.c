#include<stdio.h>
int main() {
    char character ;
     printf("Enter character a");
    scanf("%c",& character );
    int b = (int) character;
    if((b >= 65 && b <= 90)||(b >=96 && character <= 122) )
    printf("alphabat");
    else if (b >= 48 && b <= 57)
    printf("Digit");
    else printf("symbol");
    return 0 ;
}