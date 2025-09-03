#include <stdio.h> 
int main (){
 int math,english,hindi,science,computer;
   int sum=0;
   int pre=1;
   printf("Enter First Subject Marks:");
      scanf("%d",&math);
       printf("Enter Second Marks:");
       scanf("%d",&english);
       printf("Enter third number:");
       scanf("%d",&hindi);
       printf("Enter fourth number:");
       scanf("%d",&science);
       printf("Enter the fifth number:");
       scanf("%d",&computer);
       sum=math+english+hindi+science+computer;
       pre=sum*100/500;
       if(pre>=90){
           printf("Grade A+ %d\n",pre);}
           else if(pre>=80){
               printf("Grade A %d\n",pre);
           }
       else if(pre>=70){
           printf("Grade B %d\n",pre);
       }
       else if(pre>=60){
           printf("Grade C %d\n",pre);
       }
       else if (pre>=50){
           printf("Grade D %d\n",pre);
       }
       else if(pre>=40){
           printf("Grade E %d\n",pre);
       }
       else{
           printf("fali%d\n",pre);
       }
    return 0;
}