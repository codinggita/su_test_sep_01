#include <stdio.h>
int main(){
    int a;
    printf("Enter your total electricity bill \n");
    scanf("%d",&a);
    if(a>=0 && a<=50){
        printf("%d",a*2+100);  
    }
    else if(a>=51 && a<=100){
        printf("%d",100+(a-50)*3+100);
    }
    else if(a>=101 && a<=200){
        printf("%d",100+150+(a-100)*4+100);
    }
    else if(a>=201 && a<=300){
        printf("%d",100+150+400+(a-200)*5+100);
    }
    else if(a>=301 && a<=500){
        printf("%d",100+150+400+500+(a-300)*6+100);
    }
    else if(a>=501){
        printf("%d",100+150+400+500+1200+(a-500)*8+100);
    }
    printf("\nEvery bill have a fix charge of Rs 100");
    return 0;
}