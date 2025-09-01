#include <stdio.h>

int main()
{  char ch;
  printf("insert your character:");
  scanf("%c", &ch);

  if (ch >= 'a' && ch <= 'z') {
      printf("\n Alphabet");
  } else if (ch >= 'A' && ch <= 'Z') {
      printf("\n Alphabet");
  } else if (ch >= '0' && ch <= '9') {
      printf("\n Digit");
  } else {
      printf("anything else");
  }

    return 0;
}