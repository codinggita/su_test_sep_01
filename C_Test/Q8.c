#include <stdio.h>
int main(){
    char ans;
    printf("enter 'y' to continue and 'n' to exit ");
    scanf("%c",&ans);
    while(ans=='y'){
    int a,b;
    char o;
    scanf("%d%d %c",&a,&b,&o);
    if (o=='+'){
        printf("%d\n",a+b);
    }
    else if (o=='-'){
        printf("%d\n",a-b);
    }
    else if (o=='*'){
        printf("%d\n",a*b);
    }
    else if (o=='/'){
        printf("%d\n",a/b);
    }
    else{
        printf("Invalid Input");
    }
    printf("input 'y' to continue and 'n' to exit ");
    scanf(" %c ",&ans);
}
if (ans=='n'){
}
    return 0;
}