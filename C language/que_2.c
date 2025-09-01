#include <stdio.h>

int main()
{  int unit, sum, i;
sum = 0;
printf("insert your electricity units:");
scanf("%d",&unit);

if(unit>=0 && unit<=50){ sum = sum + 2*unit;}
else if(unit>=51 && unit<=100){ sum = sum + 3*unit;}
else if(unit>=101 && unit<=200){ sum = sum + 4*unit;}
else if(unit>=201 && unit<=300){ sum = sum + 5*unit;}
else if(unit>=301 && unit<=500){ sum = sum + 6*unit;}
else{ sum = sum + 8*unit;}


printf ("\n your electricity bill is %d", sum+100);

    return 0;
}