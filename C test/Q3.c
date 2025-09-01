#include<stdio.h>
int main()
{
    int math,sci,eng,hindi,ip;
    printf("Enter your math marks:-");
    scanf("%d",&math);
    printf("Enter your science marks:-");
    scanf("%d",&sci);
    printf("Enter your english marks:-");
    scanf("%d",&eng);
    printf("Enter your hindi marks:-");
    scanf("%d",&hindi);
    printf("Enter your ip marks:-");
    scanf("%d",&ip);
    int per = (math+sci+eng+hindi+ip)/5;
    printf("%d\n",per);
    if(per>=90){
        printf("Grade A+");
    }
    else if(per<90&&per>=80){
        printf("Grade A");
    }
    else if(per<80&&per>=70){
        printf("Grade B");
    }
    else if(per<70&&per>=60){
        printf("Grade C");
    }
    else if(per<60&&per>=50){
        printf("Grade D");
    }
    else if(per<50&&per>=40){
        printf("Grade E");
    }
    else{
        printf("Fail");
    }
    return 0;
}