#include <stdio.h>
int main() {

    char x;
    scanf("%c",&x);

    int y=(int)x;

    if (y>96&&y<123||y>64&&y<91)
    {
       printf(" Alphabet");
    }
    
else if (y>47&&y<58)
{
    printf("Digit");
}

else
{
    printf("Special Symbol"); 
}
    
    return 0;
}