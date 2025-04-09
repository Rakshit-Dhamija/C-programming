#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("Enter number of digits for array:");
	scanf("%d",&n);
	int num[n];
	for (i=0;i<n;i++)
	{
		printf("Enter numbers:");
		scanf("%d",&num[i]);
	}
	for (i=0;i<n;i++)
	{
		sum=sum+num[i];
	}
	float mean=sum/(float)n;
	printf("mean:%f",mean);
}