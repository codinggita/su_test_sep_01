
#include <stdio.h>

int main()
{
    int n,s=0,c=0;
float avg;
printf("Enter zero to stop");

    do 
    {       
    scanf("%d",&n);
        if (n!=0) 
        {
            s=s+n;
            c++;
        }
    } 
    while (n!= 0);

    if (c>0) {
        avg=(float)s/c; 
        printf("SUM= %d",s);
        printf("AVERAGE= %f \n",avg);
    } else {
        printf("Zero is entered\n");
    }
return 0;
}


