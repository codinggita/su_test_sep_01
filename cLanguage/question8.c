#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a, &b);
    char c;
    scanf("%c",&c);

    int total;
    int i=1;
    do{
        c == '+';
        total=a+b;
        break;

        c == '-';
        total=a-b;
        break;

        c == '*';
        total=a*b;
        break;

        c == '/';
        total=a/b;
        break;

    }while(i<=10);
}