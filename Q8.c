#include<stdio.h>
int main (){
    int action, n1 , n2;
    printf("Enter Action To Perform 1.Addition 2.Subtraction 3.Multiplication 4.Division\n");
    scanf("%d",&action);
    printf("Enter Two Values : \n");
    scanf("%d %d",&n1,&n2);
    int i =0;
    do
    {
        if(action=1){
            printf("%d\n",n1+n2);
            
        }
        
        else if(action=2){
            printf("%d\n",n1-n2);
            
        }
        
        else if(action=3){
            printf("%d\n",n1*n2);
            
        }
        
        else if(action=4){
            printf("%d\n",(float)n1+n2);
            
        }
        i++;
        break;
    } while (i<2);
    

}