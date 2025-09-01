#include<stdio.h>
int main(){
char cha;
    printf("Enter a character: ");
    scanf("%c",&cha);
    if((cha>='a' && cha<='z') || (cha>='A' && cha<='Z')){
        printf("%c is an alphabet \n", cha);
    }
    else if(cha>='0' && cha<='9'){
        printf("%c is a digit \n", cha);
    }
    else{
        printf("%c is a special symbol \n", cha);
    }

return 0;
}