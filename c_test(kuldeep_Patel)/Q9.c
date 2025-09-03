
#include <stdio.h>
#include <math.h>
int main()
{ int num,count=0,sum=0,ave;
  do{ scanf("%d",&num);
      sum += num;
      count++;
  }while(num!=0);
  ave = sum/count;
  printf("%d",ave);
    return 0;
}
