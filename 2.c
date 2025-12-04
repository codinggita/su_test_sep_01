#include <stdio.h>

int main()
{
    int unit;
    printf("elsectricity consumed is:");
    scanf("%d",&unit);
    
    
    if(unit>0 & unit<=50){
        printf("rupees=%d",unit*2);}
        
        
     if(unit>=51 & unit<=100){
        printf(" rupees=%d",unit*3+100);  }  
        
    
    
    if(unit>=101 & unit<=200){
        printf(" rupees=%d",unit*4+100);   } 
        
    
    
     if(unit>=201 & unit<=300){
        printf("rupees=%d",unit*5 +100);  }  
        
    
    
    
    if(unit>=301 & unit<=500){
        printf("rupees=%d",unit*6+100);    
        }

    if(unit>500){
        printf("rupee %d",unit*8+100);
    }
    
    return 0;
}