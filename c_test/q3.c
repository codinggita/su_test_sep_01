#include<stdio.h>
int main(){
int hindi,english,maths,science,sst;
printf("Enter your marks");
scanf("%d %d %d %d %d",&hindi,&english,&maths,&science,&sst);
int percentage =(hindi+english+maths+science+sst)*100/500;
if (percentage>=90){
    printf("Grade A+");
}
else if (percentage>=80){
    printf("Grade A");
}
else if (percentage>=70){
    printf("Grade B");
}
else if (percentage>=60){
    printf("Grade C");
}
else if (percentage>=50){
    printf("Grade D");
}
else if (percentage>=40){
    printf("Grade E");
}
else{
    printf("Fail");
}

    return 0;
}