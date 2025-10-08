#include <stdio.h>

int main() {
int a,b,c,d,e;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);

int sum=a+b+c+d+e;
int persentage=(sum*100)/500;

if(a>=90){
    printf("%d",persentage);
    printf("Grade A+");
}

 else if(a>=80){
    printf("%d",persentage);
    printf("Grade A");
}

else if(a>=70){
    printf("%d",persentage);
    printf("Grade B");
}


else if(a>=60){
    printf("%d",persentage);
    printf("Grade C");
}

else if(a>=50){
    printf("%d",persentage);
    printf("Grade D");
}


else if(a>=40){
    printf("%d",persentage);
    printf("Grade E");
}


else{
    printf("%d",persentage);
    printf("fail");
}






    return 0;
}