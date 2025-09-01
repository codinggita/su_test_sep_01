#include<stdio.h>
int main (){
int grade;
float sum;
scanf("%d,%d,%d,%d,%d,%f",&grade,&grade,&grade,&grade,&grade,&sum);

if(grade>=90){
    printf("A+");
}else if(grade>=80){
    printf("A");
}else if(grade>=70){
    printf("B");
}else if(grade>=60){
    printf("C");
}else if(grade>=50){
    printf("D");
}else if(grade>=40){
    printf("E");
}else{
    printf("Fail");  
    sum=grade+grade+grade+grade+grade/500*100; 
}
    return 0;
}