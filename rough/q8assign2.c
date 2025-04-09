#include<stdio.h>
int main(){
	char c;
	int i;
	long int li;
	float f;
	double d;
	printf("char:%d\n",sizeof(c));
	printf("int:%d\n",sizeof(i));
	printf("long int:%d\n",sizeof(li));
	printf("float:%d\n",sizeof(f));
	printf("double:%d\n",sizeof(d));
	//implicit type
	float a;
	a=5.0/2;
	printf("%f",a);
	a=5/2;
	printf("%f",a);
}

