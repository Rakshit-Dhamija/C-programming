//q9 assign 1
//WAP for simple interest
#include<stdio.h>
#include<math.h>
int main(){
	float p,r,si,si1,t;
	printf("enter principal:");
	scanf("%f",&p);
	printf("enter rate of interest:");
	scanf("%f",&r);
	printf("enter time:");
	scanf("%f",&t);
	si=(p*r*t)/100.0;
	si1=p+((p*r*t)/100.0);
	printf("simple interest:%f\n",si);
	printf("total amount:%f",si1);
}
