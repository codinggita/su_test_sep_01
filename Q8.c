

#include<stdio.h>
int main(){
    char c;
int a,b;
printf("Please enter first char then Number");
scanf("%c %f %f",&c,&a,&b);
int result;

if(c=='+'){
    result = a + b;
    printf("%f",result);
}
else if(c=='-'){
    result = a - b;
    printf("%f",result);
}
else if(c=='*'){
    result = a * b;
    printf("%f",result);
}
else if(c=='/'){
    if(b!=0){
        result = a / b;
    printf("%f",result);
    }
    else{
        printf("divide with 0 is not allowed");
    }
}
else{
    printf("Invalid c");
}
    return 0;
}

