#include<stdio.h>
int main()
{ float sub1 , sub2, sub3 , sub4 , sub5 , percentage;
    printf("Enter the subject marks :");
    scanf("%f",&sub1);
    scanf("%f",&sub2);
     scanf("%f",&sub3);
     scanf("%f",&sub4);
     scanf("%f",&sub4);
    float result;
    result=sub1+sub2+sub3+sub4+sub5;
    percentage=result/5;
    printf("%f\n",percentage);
    if(result>=90){
        printf("Grade A+");
    }
    else if(result>=80 && result<90){
        printf("Grade A");
    } 
    else if(result>=70 && result<80){
        printf("Grade B");
    } 
else if(result>=60 && result<70){
        printf("Grade C");
    } 
else if(result>=50 && result<60){
        printf("Grade D");
    } 
else if(result>=40 && result<50){
        printf("Grade E");
    } 
else if(result<40){
    printf("Fail");
}
  else {
    printf("invalid");
  }  
    
    
    
    
    
    
    
    
    return 0;
}