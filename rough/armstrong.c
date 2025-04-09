#include<stdio.h>
#include<math.h>
int main(){
	int num,d,sum=0;
	int c=0;
	scanf("%d",&num);
	int x=num;
	int y=num;
	while(num!=0)
	{
		c++;
		printf("%d",c);
		num=num/10;
	}
	while(x!=0)
	{
		d=x%10;
		x=x/10;
		printf("\n");
		printf("%d",d);
		sum=sum+(pow(d,c));
	}
	if(y==sum)
	printf("\narmstrong");
	else
	printf("\nnot armstrong");
}