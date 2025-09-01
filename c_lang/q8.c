#include <stdio.h>
int main(){
    int c, a,b;
   scanf("%d",&a);
scanf("%d",&b);
 scanf("%d",&c); 
 int result;
 do{
    result = c+b;
    printf("%d",result);
    continue;
 }
 while(a==1);

 do{
    result= b-c;
    printf("%d",result);
 }
 while(a==2);
 do{
    result= b*c;
    printf("%d",result);
 }
 while(a==3);
 do{
    result = b/c;
    printf("%d",result);
 }
 while(a==4);
    return 0;
}