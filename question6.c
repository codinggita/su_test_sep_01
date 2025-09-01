#include <stdio.h>
int main()
{


int num=452;
    int sum =0;
    int i=num;
    while(i>0){
        int digit = i%10;
        sum = sum +digit;
       i=i/10;
    }
    printf("sum is %d\n",sum);
    
   
   
    return 0;
}