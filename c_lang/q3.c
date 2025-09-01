#include <stdio.h>

int main()
{
int a,b,c,d,e;
scanf("%d %d %d %d %d ",&a ,&b ,&c ,&d ,&e);
int total = a+b+c+d+e;
int result= total*100/500;
if(result>=90){
    printf(" %d Grade A+", result);
}
else if(result>=80 && result<90){
    printf(" %dGrade A", result);
}
else if(result>=70 && result<80){
    printf(" %d Grade B", result);
}
else if(result>=60 && result<70){
    printf(" %d Grade C", result);
}
else if(result>=50 && result<60){
    printf(" %d Grade D", result);
}
else if(result>=40 && result<=50){
    printf(" %d Grade E", result);
}
else {
    printf("Fail");
}

    return 0;
}