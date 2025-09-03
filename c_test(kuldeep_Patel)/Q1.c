#include <stdio.h>

int main()
{ char inp;
  scanf("%c",&inp);
  if((inp >= 65 && inp <= 90)||(inp >= 97 && inp <= 122)){
      printf("An alphabet");
  }
  else if(inp >= 48 && inp <= 57){
      printf("A digit");
  }
  else{
      printf("A special sumbol");
  }

    return 0;
}
