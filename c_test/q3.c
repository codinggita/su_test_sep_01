#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the marks of your 5 subjects\n");
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    int result=(a+b+c+d+e)*100/500;
    printf("%d percentage\n",result);
    if(result>=90){
        printf("Grade A+");
    }
    else if(result>=80){
        printf("Grade A");
    }
    else if(result>=70){
        printf("Grade B");
    }
    else if(result>=60){
        printf("Grade C");
    }
    else if(result>=50){
        printf("Grade D");
    }
    else if(result>=40){
        printf("Grade E");
    }
    else if(result<40){
        printf("Fail");
    }
return 0;
}