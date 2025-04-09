#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	printf("enter a:\n");
	scanf("%f",&a);
	printf("enter b:\n");
	scanf("%f",&b);
	printf("enter c:\n");
	scanf("%f",&c);
	float d=(b*b)-4*a*c;
	if (d==0)
	{
		float root=(-b)/(2*a);
		printf("root of equation is:%f\n",root);
	}
	else if (d>0)
	{
		float root1=(-b+ sqrt(d))/(2*a);
		float root2=(-b- sqrt(d))/(2*a);
		printf("roots of the equation are:\n%f\n%f",root1,root2);
	}
	else
	{
		/*printf("d<0\n");
		printf("d=%f\n",d);
		float sq=sqrt(d);
		printf("underoot %f\n",sq);*/
		float root1=(-b)/(2*a);
		float root2=(-b)/(2*a);
		float imagroot1=(-(sqrt(-d)))/(2*a);
		float imagroot2=(sqrt(-d))/(2*a);
		printf("root1 of the equation are:\n%f\n%f\n",root1,imagroot1);
		printf("root2 of the equation are:\n%f\n%f\n",root2,imagroot2);
	}
}

