#include<stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){printf("Alphabet");}
    else if(ch>='1' && ch<='9'){printf("digit");}
    else{printf("special number");}


    return 0;
}
















