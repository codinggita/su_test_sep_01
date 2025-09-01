#include <stdio.h>

int main()
{
    int number;
    int product=1;
    printf("ENTER THE NUMBER U WANT TO BE FACTORIAL : ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
      product=product*i;
    }
      printf("THE ASNWER OF FACTORIAL IS : %d",product);

    return 0;
}