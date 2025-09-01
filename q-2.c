#include <stdio.h>

int main(){
    int unit,total;
    scanf("%d", &unit);

    if (unit >= 0 && unit <= 50)
    {
        total=unit*2;
        printf("Total Bill = %d", total);
    }
    else if (unit >= 51 && unit <= 100)
    {
        total=unit*3;
        printf("Total Bill = %d", total);
    }
    else if (unit >= 101 && unit <= 200)
    {
        total=unit*4;
        printf("Total Bill = %d", total);
    }
    else if (unit >= 201 && unit <= 300)
    {
        total=unit*5;
        printf("Total Bill = %d", total);
    }
    else if (unit >= 301 && unit <= 500)
    {
        total=unit*6;
        printf("Total Bill = %d", total);
    }
    else{
        total=unit*8;
        printf("Total Bill = %d", unit);
    }
    return 0;
}