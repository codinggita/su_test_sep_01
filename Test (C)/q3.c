#include <stdio.h>
int main()
{
    printf("Enter the subject marks: ");
	float eng;
	scanf("%f",&eng);
	float maths;
	scanf("%f",&maths);
	float gujarati;
	scanf("%f",&gujarati);
	float bio;
	scanf("%f",&bio);
	float phy;
	scanf("%f",&phy);
	printf("sum of subject marks:%f + %f + %f + %f + %f", eng, maths, gujarati, bio, phy);
	float sum=eng+maths+gujarati+bio+phy;
	printf("total:%f",sum);
	float per=(sum/500)*100;
	printf("Percentage:%f",per);
	if(per>=90) {
		printf("grade A+");
	}
	else if(per>=80) {
		printf("grade A");

	}
	else if(per>=70) {
		printf("grade B");
	}
	else if(per>=60) {
		printf("grade C");
	}
	else if(per>=50) {
		printf("grade D");
	}
	else if(per>=40) {
		printf("grade E");

	}
	else {
		printf("fail");
	}
	return 0;
}