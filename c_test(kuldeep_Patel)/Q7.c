
#include <stdio.h>
#include <math.h>
int main()
{ int num,count=0,dig,res=0;
  scanf("%d",&num);
  int i = num;
  while(i != 0){
      i = i/10;
      count++;
  }
 int j = num;
 while(j > 0){
     dig = j%10;
     res += pow(dig,count);
     j /= 10;
 }
 if(res == num){
     printf("Armstrong Number");
 }
 else{
     printf("Not Armstrong Number");
 }
    return 0;
}
