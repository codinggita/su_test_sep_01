#include <stdio.h>

int main()
{
   

int a,b,c,d,e;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);

int sum=a+b+c+d+e;
int percentage=(sum*100)/500;

if(a>=90){
    printf("%d",percentage);
    printf("Grade A+");
}

else if(a>=80){
    printf("%d",percentage);
    printf("Grade A");
}

else if(a>=70){
    printf("%d",percentage);
    printf("Grade B");
}

else if(a>=60){
    printf("%d",percentage);
    printf("Grade C");
}

else if(a>=50){
    printf("%d",percentage);
    printf("Grade D");
}

else if(a>=40){
    printf("%d",percentage);
    printf("Grade E");
}

else{
    printf("Fail");
}

   return 0;
}
