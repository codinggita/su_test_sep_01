#include <stdio.h>
int main(){
    
    
int marks1;
int marks2;
int marks3;
int marks4;
int marks5;
int total;
float percentage;
scanf("%d",&marks1);
scanf("%d",&marks2);
scanf("%d",&marks3);
scanf("%d",&marks4);
scanf("%d",&marks5);
total=marks1+marks2+marks3+marks4+marks5;
percentage=(total/5);
if(percentage>=90){
    printf("gradeA+");
}else if(percentage>=80&&percentage<90){
    printf("grade A");
}else if(percentage>=70&&percentage<80){
    printf("grade B");
}else if(percentage>=60&&percentage<70){
    printf("grade C");
}else if(percentage>=50&&percentage<60){
    printf("grade D");
}else if(percentage>=40&&percentage<50){
    printf("grade E");
}else if(percentage<40){
    printf("fail");
}








    return 0;
}