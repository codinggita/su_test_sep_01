#include <stdio.h>
int main () {
     printf("Enter tw numbers\n");
      int a,b,result=0;
    scanf("%d%d",&a,&b);
    int n;
    printf("Enter 1 for add 2 for sub 3 for multiply 4 for divide ");
    scanf("%d",&n);
   
    switch (n)
    {
    case 1:
       result=a+b;
       printf("Result %d",result);
        break;
        case 2:
        result=a-b;
        printf("Result %d",result);
        break;
        case 3:
        result=a*b;
        printf("Result %d",result);
        break; 
        case 4:
        if (b==0) printf("Deno cannot be 0");
        else
        result=a/b;
        printf("Result %d",result);
        break;
    
    default: printf("Invalid input");
        break;
        
    }
}