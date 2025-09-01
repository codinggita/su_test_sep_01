#include <stdio.h>
int main (){
 int num;
  printf("Enter a number: ");
scanf("%d",&num);

int sum = 0;
int i = num;
int in = 0 ;
while(i>0){
int digit = i % 10;
sum = sum +( digit * digit * digit);
int in = 0 ;
i = i/10;
}
printf("%d\n",sum);
    if( in != 0){
    printf("Its not  Armstrong  number.");
}
    else {
        printf("its  a Armstrong number. ");
    }
  



    return 0;
}