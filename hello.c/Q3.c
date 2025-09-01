# include<stdio.h>
int main(){
int a;
int b;
int c;
int d;
int e;
scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
float p;
float r;
p=a+b+c+d+e;
r=(p/500)*100;
if(r>=90){
    printf("%d\n Grade A+");

}
else if(r>=80){
    printf("%d\n Grade A");
}
else if(r>=70){
    printf("%d\n Grade b");
}
else if(r>=60){
    printf("%d\n Grade C");
}
else if(r>=50){
    printf("%d\n Grade D");
}
else if(r>=40){
    printf("%d\n Grade E");
}
else(r<40){
    printf("%d\n Fail");
}
    return 0;
}