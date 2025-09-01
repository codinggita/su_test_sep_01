#include <stdio.h>

int main()
{   printf("enter marks between 0-100 : ");
    int english;
    int maths;
    int evs;
    int hindi;
    int sst;
    scanf("%d\n",&english);
    scanf("%d\n",&maths);
    scanf("%d\n",&evs);
    scanf("%d\n",&hindi);
    scanf("%d\n",&sst);
    
    float sum = english + maths+evs+hindi+ sst;
    float percent = sum/5;
    printf("%.2f\n",percent);
    if(percent>=90)
    {{printf(" percent is %f\n",percent);}
    printf("Grade A+\n");}
    else if(percent>=80) 
    {{printf(" percent is %f\n",percent);}
    printf("Grade A\n");}
    else if(percent>=70)
   { {printf("%f\n",percent);}
   printf("Grade B\n");}
   else if( percent>=60)
   {{printf("%f\n",percent);}
   printf(" Grade C\n");}
   else if(percent>=50)
  { {printf("%f\n",percent);}
  printf("grade D\n");}
  else if(percent>=40)
  {{printf("%f\n",percent);}
  printf("grade E\n");}
    else 
    printf("FAIL\n");
    
    return 0;
}