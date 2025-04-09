//WAP to find min value in array
#include<stdio.h>
int main(){
	int min,i,n;
	printf("Enter number of digits for array:");
	scanf("%d",&n);
	int num[n];
	for (i=0;i<n;i++)
	{
		printf("Enter numbers:");
		scanf("%d",&num[i]);
	}
	min=num[0];
	for(i=0;i<n;i++)
	{
		if(num[i]<min)
		min=num[i];
	}
	printf("Min:%d",min);
}