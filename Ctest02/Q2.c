#include <stdio.h>
int main()
{
int unit;
printf("Enter the unit : ");
scanf("%d",&unit);
if(unit >= 0 && unit<=50){
    printf("Bill = %d",unit*2);
}
else if(unit >=51 && unit<=100){
    printf("Bill = %d",unit*3);
}
else if(unit >=101 && unit<=200){
    printf("Bill = %d",unit*4);
}
else if(unit >=201 && unit<=300){
    printf("Bill = %d",unit*5);
}
else if(unit >=301 && unit<=500){
    printf("Bill = %d",unit*6);
}
else if(unit >500 ){
    printf("Bill = %d",unit*8 +100);
}
return 0;
}


