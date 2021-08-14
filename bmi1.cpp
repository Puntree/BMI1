#include<stdio.h>
int main()
{
	float w,h,bmi;
	printf("Weight : ");
	scanf("%f",&w);
	printf("Height(m) : ");
	scanf("%f",&h);
	bmi = w/(h*h);
	printf("Your BMI = %f\n",bmi);
	if(bmi<18.5){
		printf("underweight\n");
	}else if(bmi<=24.9){
		printf("standard\n");
	}else if(bmi<=29.9){
		printf("overweight\n");
	}else{
		printf("obesity\n");
	}
}
