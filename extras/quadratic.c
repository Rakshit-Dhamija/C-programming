#include<stdio.h>
#include<math.h>
int main(){
	float rad,s,c,l,p,degree;
	printf("enter the angle:");
	scanf("%f",&degree);
	rad=(pi()/180)*degree;
	s=sin(rad);
	printf("sin:%f",s);	
}

