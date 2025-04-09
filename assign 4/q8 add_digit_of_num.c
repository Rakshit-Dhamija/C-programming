//q8 assign 4
//WAP to add digits of a number
#include<stdio.h>
int add(int a)
{
	int i, rem=0, sum=0;
	while(a!=0)
	{
		rem=a%10;
		sum=sum+rem;
		a=a/10;
		
	}
	printf("SUM:%d",sum);
}
int main()
{
	int a;
	printf("Enter number:");
	scanf("%d",&a);
	add(a);
}