
#include <stdio.h>

int main()
{ int unit,rate;
  scanf("%d",&unit);
  if(unit >= 50 && unit <= 0){
      rate = unit*2;
      printf("Bil is %d",rate);
  }
  else if(unit >= 51 && unit <= 100){
      rate = unit*2 + (unit-50)*3;
      printf("Bil is %d",rate);
  }
  else if(unit >= 101 && unit <= 200){
      rate = unit*2 + (unit-50)*3 + (unit-100)*4;
      printf("Bil is %d",rate);
  }
  else if(unit >= 201 && unit <= 300){
      rate = unit*2 + (unit-50)*3 + (unit-100)*4 + (unit-200)*5;
      printf("Bil is %d",rate);
  }
  else if(unit >= 301 && unit <= 500){
     rate = unit*2 + (unit-50)*3 + (unit-100)*4 + (unit-200)*5 + (unit -300)*6;
      printf("Bil is %d",rate);
  }
  else{
     rate = unit*2 + (unit-50)*3 + (unit-100)*4 + (unit-200)*5 + (unit -300)*6 + (unit -500)*8;
     printf("Bil is %d",rate+100);
  }
    return 0;
}
