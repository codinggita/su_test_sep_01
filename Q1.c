#include <stdio.h>

int main()
{
  char a;
  scanf("%c",&a);
  if (a=='1' || a=='2' || a=='3' || a== '5' || a=='6' || a=='7' || a=='8' || a== '9' || a=='0')
  {
      printf("%c is Digit",a);
  }
  else if (a=='!' || a=='@'|| a== '#'|| a=='$' || a=='%'|a=='&'||a=='*'||a=='?')
  {
      printf("%c is Special Symbol",a);
  }
  else {
      printf("%c is Alphabet",a);
  }
  
  
  

    return 0;
}
