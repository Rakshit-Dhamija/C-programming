//q7 assign 4
//Fibonacci series of n numbers
#include<stdio.h>
int fib(int n)
{
	int i, t1=0,t2=1, sum=0;
	printf("0\t");
	for(i=0;i<=n-2;i++)
	{
		t1=t2;
		t2=sum;
		sum=t1+t2;
		printf("%d\t",sum);
	}
}
int main()
{
	int n;
	printf("Enter n");
	scanf("%d",&n);
	fib(n);
}