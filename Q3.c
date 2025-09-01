#include <stdio.h>

int main()
{
	int S1,S2,S3,S4,S5,Add;
	scanf("%d",&S1);
	scanf("%d",&S2);
	scanf("%d",&S3);
	scanf("%d",&S4);
	scanf("%d",&S5);
	Add=S1+S2+S3+S4+S5;
	if(Add>=450){
	    printf("A+");
	}
	else if(Add>=400){
	       printf("A");
	}
	else if (Add>=350){
	       printf("B");
	}
		else if (Add>=300){
	       printf("C");
	}
		else if (Add>=250){
	       printf("D");
	}
		else if (Add>=200){
	       printf("E");
	}
	else{
	    printf("fail");
	}
	    return 0;
}
