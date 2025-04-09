#include<stdio.h>
int main(){
	int a=5,c=20;
	//   101<<2=10100
	//   5<<2=5*2^2
	//   10100>>2=101
	//   20>>2=20/(2^2)
	int b=a<<2;
	int d=c>>2;
	printf("%d",b);
	printf("\n%d",d);
}