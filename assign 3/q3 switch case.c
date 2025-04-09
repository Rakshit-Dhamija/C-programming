//q3 assign 3
//calculator
#include<stdio.h>
int main(){
	int a,b,d;
	char c;
	printf("input operator:");
	scanf("%c",&c);
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	//int n=c;
	//printf("%d",c);
	switch(c)
	{
		case '+':
			d=a+b;
			printf("a+b=%d",d);
			break;
		case 45:
			d=a-b;
			printf("a-b=%d",d);
			break;
		case 42:
			d=a*b;
			printf("a*b=%d",d);
			break;
		case 47:
			d=a/b;
			printf("a/b=%d",d);
			break;
		case 37:
			d=a%b;
			//escape operator %
			printf("a %% b=%d",d);
			break;
		default:
			printf("invalid");
	}
}
