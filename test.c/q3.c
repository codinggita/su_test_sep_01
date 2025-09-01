#include<stdio.h>
int main(){

int a;
int b;
int c;
int d;
int e;
float t;
float p;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
t=a+b+c+d+e;
p= (t / 500) * 100;
 if (p >= 90)
        printf("Grade A+\n");
    else if (p >= 80)
        printf("Grade A\n");
    else if (p >= 70)
        printf("Grade B\n");
        else if (p >= 60)
        printf("Grade C\n");
    else if (p >= 50)
        printf("Grade D\n");
    else if (p >= 40)
        printf("Grade E\n");
    else
        printf("Fail\n");



























    return 0;
}





