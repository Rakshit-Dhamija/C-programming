//q5 assign 4 
// hcf of two numbers
#include<stdio.h>
void hcf(int a,int b)
{
	int i,c,hcf;
	c=a>b?a:b;
	for(i=1;i<=c;i++)
	{
		if((a%i==0)&&(b%i==0))
		hcf=i;
	}
	printf("HCF:%d",hcf);
}
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	hcf(a,b);
}
