#include <stdio.h>

int main()
{
    int i =987;
    int sum =0;
    while(i>0){
        int e = i%10;
        sum = sum + e;
        i=i/10;
      
    }
      printf("%d",sum);
    return 0;
}
