#include <stdio.h>
int main(){
    int m1;
    printf("Marks in subject 1 : ");
    scanf("%d",&m1);

    int m2;
    printf("Marks in subject 2 : ");
    scanf("%d",&m2);

    int m3;
    printf("Marks in subject 3 : ");
    scanf("%d",&m3);

    int m4;
    printf("Marks in subject 4 : ");
    scanf("%d",&m4);

    int m5;
    printf("Marks in subject 5 : ");
    scanf("%d",&m5);

    int per=(m1 + m2 + m3 + m4 + m5)/5;
    printf("Your percentage is : %d \n",per);

    if(per>=90){
        printf("Grade A+");}

    else if(per>=80){
        printf("Grade A");}

    else if(per>=70){
        printf("Grade B");}

       else if(per>=60){
        printf("Grade C");}

        else if(per>=50){
        printf("Grade D");}

       else if(per>=40){
        printf("Grade E");

    
    }
   else if(per<40){
        printf("Fail");}

    
   
    return 0;
}