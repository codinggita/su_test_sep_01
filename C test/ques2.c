#include <stdio.h>
int main(){
    
    int a;
    printf("Enter consumed electricity units");
    scanf("%d",&a);
    if(a>=0 && a<=50){
        printf("Total Bill= %d",a,2*a){
            if(a>=51 && a<=100){
                printf("Total Bill= %d",a,3*a){
                    if(a>=101 && a<=200){
                        printf("Total bill = %d",a,4*a){
                            if(a>=201 && a<=300){
                                printf("Total Bill = %d",a,5*a){
                                    if(a>=301 && a<=500){
                                        printf("Total Bill = %d",a,6*a){
                                            if(a>500){
                                                printf("Total Bill = %d",a,8*a);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}