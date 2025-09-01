# include <stdio.h>
int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    int chanCh = (int)ch;
    if((65 <= chanCh && chanCh <= 90) || (97 <= chanCh && chanCh <= 122))
    printf("%c is an Alphabet",ch);
    else if(48 <= chanCh && chanCh <= 57)
    printf("%c is a digit",ch);
    else
    printf("%c is a special character.",ch);

    return 0;
}