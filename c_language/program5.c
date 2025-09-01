
#include <stdio.h>

int main()
{
    int d,rev=0;
int n;
scanf("%d",&n);
int i=n;
while(i!=0)
{
    d=i%10;
    rev=rev*10+d;
    i=i/10;
}
if(n==rev)
{
    printf("It is a Palindrome no.");
}
else
{
    printf("Not a Palindrome no.");
}
return 0;
}



