#include <stdio.h>
int main()
{
    char cha;
    printf("PLEASE ENTER A CHARACTER:");
    scanf("%c",&cha);

    if(cha>=65 & cha<=90 || cha>=97 & cha<=122)
    {
        printf ("GIVEN CHARCTER IS ALPHABET");
    }
    else if (cha>=48 & cha<=57)
    {
        printf ("GIVEN CHARCTER IS NUMBER");
    }
    else 
    {
         printf ("GIVEN CHARCTER IS SPECIAL CHARACTER");
    }
}