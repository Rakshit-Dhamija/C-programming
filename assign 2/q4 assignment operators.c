//q4 assign 2
// += -= *= /= %=
#include<stdio.h>
int main(){
    int a=5,b,c,d,e,f;
	printf("enter b:");
	scanf("%d",&b);
	a+=b;
	printf("\na+=b:%d\n",a);
	
	printf("enter c:");
	scanf("%d",&c);
	a-=c;
	printf("\na-=c:%d\n",a);

	printf("enter d:");
	scanf("%d",&d);
	a*=d;
	printf("\na*=d:%d\n",a);
	
	printf("enter e:");
	scanf("%d",&e);
	a/=e;
	printf("\na/=e:%d\n",a);
	
	printf("enter f:");
	scanf("%d",&f);
	a%=f;
	printf("\na%=f:%d\n",a);
}