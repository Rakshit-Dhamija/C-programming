#include<stdio.h>
int main(){
	int x,y,t;
	x=2;
	y=5;
	printf("value of x:%d\n",x);
	printf("value of y:%d\n",y);
	t=x;
	x=y;
	y=t;
	printf("new value of x:%d\n",x);
	printf("new value of y:%d\n",y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("new value of x:%d\n",x);
	printf("new value of y:%d\n",y);
}
