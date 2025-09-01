
#include <stdio.h>

int main()
{
  char ch;
  scanf("%c",&ch);
  int n=(int)ch;
  if(n>=65 && n<=90 || n>=97 && n<=122)
  {
      printf("It is an alphabet");
  }
  else if(n>=0 && n<=9)
  {
      printf("It is digit");
  }
  else
  {
      printf("Special symbol");
  }
return 0;
}