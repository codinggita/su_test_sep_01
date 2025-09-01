#include <stdio.h>
int main (){
    int a,b,c,d,e;
    int per=(a+b+c+d+e)/5;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
   printf("percentage=%d ",per);
    if (per>0){
        if(per>=90){
            printf("grade A+");
        }
         if(per>=80){
            printf("grade A");
        }
         if(per>=70){
            printf("grade B");
        }
         if(per>=60){
            printf("grade C");
        }
         if(per>=50){
            printf("grade D");
        }
         if(per>=40){
            printf("grade E");
        }
    
    else{
        printf("fail"); } 
    }
    return 0;
}