#include <stdio.h>

int main(){
    int a,b;
    char c;
    int d=0;
    float ans;
    do{
        printf("+,-,*,/ or e to exit : ");
        scanf("%c",&c);
        if(c=='+'){
            printf("Type Numbers seperated by spaces");
            scanf("%d %d",&a,&b);
            ans=a+b;
            printf("%d + %d = %f\n",a,b,ans);
        }
        else if(c=='-'){
            printf("Type Numbers seperated by spaces");
            scanf("%d %d",&a,&b);
            ans=a-b;
            printf("%d - %d = %f\n",a,b,ans);
        }
        else if(c=='*'){
            printf("Type Numbers seperated by spaces");
            scanf("%d %d",&a,&b);
            ans=a*b;
            printf("%d * %d = %f\n",a,b,ans);
        }
        else if(c=='/'){
            printf("Type Numbers seperated by spaces");
            scanf("%d %d",&a,&b);
            if(b==0){
                printf("Division by 0 not possible\n");
            }
            else{
                ans=a/b;
                printf("%d / %d = %f\n",a,b,ans);
            }
        }
        else if(c=='e'){
            printf("Thank You");
            break;
        }

    }while(d==0);

    return 0;
}