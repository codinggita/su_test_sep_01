#include <stdio.h>
int main()
{
  int sci , maths , ss , eng , guj ;
  int sum=0;
  printf("Enter sci ,maths ,ss ,eng ,guj marks : ");  
  scanf("%d %d %d %d %d",&sci,&maths,&ss,&eng,&guj);
sum = sci + maths + ss + eng + guj ;
int per = sum/5;
if(per>=90){
    printf("Grade A+");
}
else if(per>=80){
    printf("Grade A");
}
else if(per>=70){
    printf("Grade B");
}
else if(per>=60){
    printf("Grade C");
}
else if(per>=50){
    printf("Grade D");
}
else if(per>=40){
    printf("Grade E");
}
else if(per<40){
    printf("Fail");
}
return 0;
}