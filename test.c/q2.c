#include <stdio.h>

int main()
{
    int unit;
    
    scanf("%d",&unit);
    
    
    if(unit>=0&&unit<=50){
        printf("Total bill:%d",unit*2+100);
    }else if(unit>=51&&unit<=100){
        printf("Total bill:%d",unit*3+100);
    }else if(unit>=101&&unit<=200){
        printf("Total bill: %d",unit*4+100);
    }else if(unit>=201&&unit<=300){
        printf("Total bill: %d",unit*5+100);
    }else if(unit>=301&&unit<=500){
        printf("Total bill: %d",unit*6+100);
    }else{
        printf("Total bill: %d",unit*8+100);
    }

    return 0;
}