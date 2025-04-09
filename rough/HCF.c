#include<stdio.h>
int main(){
	int a,i,b,hcf;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
/*	int max=a>b?a:b;
	printf("%d",max);
	if (max%a=0)
	printf("HCF is:%d",a);
	else if (max%b=0)
	printf("HCF is:%d"b);
    else if {}*/
	for (i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		hcf=i;
	}
	printf("HCF:%d",hcf);
}