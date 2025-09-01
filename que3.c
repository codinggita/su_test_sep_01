 #include<stdio.h>
 int main(){
    int a,b,c,d,f,g,h;
    int sum=a+b+c+d+e+f;
    scanf("%d",&sum);
     int pr=sum/500*100>=90;
   if(pr>=90) {
    printf(" A grade");
   }
   else if (pr>=80){
    printf("B grade");
   }
 else if (pr>=70){
    printf("c grade");
   }
 else if (pr>=50){
    printf("D grade");
   }
  else if (pr>=40){
    printf("E grade");
   }
 else { printf("fail");

 }
 return 0;
   }

 