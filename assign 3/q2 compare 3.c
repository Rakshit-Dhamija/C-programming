//q2 assign 3
//greatest of 3
#include<stdio.h>
int main(){
	int a,b,c,g;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	printf("c:");
	scanf("%d",&c);
	/*if(a>b && a>c){
		g=a;
		printf("Greatest:%d",g);
	}
	else if(b>a && b>c){
		g=b;
		printf("Greatest:%d",g);
	}
	else if(c>a && c>b){
		g=c;
		printf("Greatest:%d",g);
	}
	else{
		printf("equal");
	}*/
	g=a>b&&a>c?a:g;
	g=b>a&&b>c?b:g;
	g=c>a&&c>b?c:g;
	printf("Greatest:%d",g);
	return 0;
}