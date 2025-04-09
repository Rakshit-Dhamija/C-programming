//q2 assign 2
// quadratic eq for d>=0
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float d,root,r1,r2;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	d=(b*b)-(4*a*c);
	if(d==0)
	{
		root=(-b)/(2*a);
		printf("Roots are:%f \t %f",root,root);
	}
	else if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("roots are:\n r1:%f\n r2:%f",r1,r2);
	}
	else
	printf("No Real roots");
}