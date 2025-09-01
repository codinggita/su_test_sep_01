#include <stdio.h>

int main(){
    int input,temp;
    int palindrome=0;
    printf("input : ");
    scanf("%d", &input);
    int i=input;

    while (i > 0)
    {
        temp = i%10;
        palindrome=((palindrome*10)+temp);
        i = i/10;
    }
    if (palindrome == input)
    {
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    

    return 0;
}