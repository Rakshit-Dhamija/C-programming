//q1 assign 2
//WAP to use sin() cos() log() pow() sqrt()
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,e;
	printf("Enter angle:");
	scanf("%f",&a);
	float angle=((3.1415926)/180.0)*a;
	printf("sin of angle is:%f\n",sin(angle));
	printf("cos of angle is:%f\n",cos(angle));
	printf("Enter number for log:");
	scanf("%f",&b);
	//ln(b)/ln(10)=log(b)
	printf("log of number is:%f\n",(log(b)/log(10)));
	printf("Enter base number for pow:");
	scanf("%f",&c);
	printf("Enter power number for pow:");
	scanf("%f",&d);
	//pow(c,d)=c^d
	printf("Number for power is:%f\n",pow(c,d));
	printf("Enter base number for sqrt:");
	scanf("%f",&e);
	printf("number after sqrt is:%f\n",sqrt(e));
}