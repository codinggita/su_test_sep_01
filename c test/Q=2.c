#include<stdio.h>
int main (){
int unit;

scanf("%d",&unit);

if(unit<=0 && unit>=50){
    printf("2 per unit");
}else if(unit<=51 && unit>=100){
      printf("3 per unit");
}else if(unit<=101 && unit>=200){
      printf("4 per unit");
}else if(unit<=201 && unit>=300){
       printf("5 per unit");
}else if(unit<=301 && unit>=500){
      printf("6 per unit");
}else {
      printf("8 per unit");
}

    return 0;
}