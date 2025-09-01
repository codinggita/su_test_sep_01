#include <stdio.h>
int main()
{
    int a;
    printf("Input unit=");
    scanf("%d",&a);

    if(a<0)
    {
        printf("Please enter valid unit");
    }


    else if(a>0 && a<=50)
    {
        printf("Total bill=%d",a*2+100);
    }

    else if(a<=100)
    {
        printf("Total bill=%d",(50*2)+(a-50)*3+100);
    }
     else if(a<=200)
    {
        printf("Total bill=%d",(50*2)+(50*3)+(a-100)*4+100);
    }
     else if(a<=300)
    {
        printf("Total bill=%d",(50*2)+(50*3)+(100*4)+(a-200)*5+100);
    }
     else if(a<=500)
    {
        printf("Total bill=%d",(50*2)+(50*3)+(100*4)+(100*5)+(a-300)*6+100);
    }
     else if(a>500)
    {
        printf("Total bill=%d",(50*2)+(50*3)+(100*4)+(100*5)+(200*6)+(a-500)+100);
    }
    
    return 0;
}