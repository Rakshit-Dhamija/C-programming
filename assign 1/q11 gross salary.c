//q11 assign 1
//WAP to calculate gross salary
#include<stdio.h>
#include<math.h>
int main(){
	float b				;
	printf("enter the basic salary:");
	scanf("%f",&b);
	float da=b/10;
	float ta=(12*b)/100;
	float g=b+ta+da;
	printf("gross salary is:%f",g);
	return 0;
}