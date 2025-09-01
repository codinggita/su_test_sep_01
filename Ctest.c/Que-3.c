#include<stdio.h>
int main(){
int s1,s2,s3,s4,s5;
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
int sum = s1+s2+s3+s4+s5;
int per= sum/5;
if( per>=90){
    printf("A+");
}
else if( per>=80){
    printf("A");
}
else if(per>=70){
    printf("B");
}
else if(per>=60){
    printf("C");
}
else if(per>=50){
    printf("D");
}
else if( per >=40){
    printf("E");
}
else{
    printf("Fail");
}





    return 0;
}