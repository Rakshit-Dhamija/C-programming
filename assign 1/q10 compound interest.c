//q10 assign 1
//WAP for compound interest
#include<stdio.h>
#include<math.h>
int main(){
	float p,r,n,t;
	printf("enter principal:");
	scanf("%f",&p);
	printf("enter rate of interest:");
	scanf("%f",&r);
	printf("enter number of times interest is compounded per year:");
	scanf("%f",&n);
	printf("enter time:");
	scanf("%f",&t);
	float z=r/100;
	float x=pow(1+z,n*t);
	float ci=p*x;
	printf("Compound interest %f" ,ci);
	return 0;	
}
