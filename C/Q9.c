#include <stdio.h>

int main(){
    float a;
    float add=0;
    float count=0;
    float avg=0;
    float d=0;
    do{
        printf("Numbers and 0 to end : ");
        scanf("%f",&a);
        if(a==0){
            break;
        }
        else{
            add=add+a;
            count++;
        }
    }while(d==0);
    avg=add/count;
    printf("Sum : %f\n",add);
    printf("Average : %f",avg);

    return 0;
}