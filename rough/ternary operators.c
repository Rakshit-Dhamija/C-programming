#include<stdio.h>
int main(){
	int a,x;
	printf("enter a:\n");
	scanf("%d",&a);
	x=a>0?2:-1;
	//printf("value of x:%d",x);
	a>0?printf("2"):printf("-1");
}
