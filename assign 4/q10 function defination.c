//q10 assign 4
//WAP to show diiferent types of function outputs
#include<stdio.h>
int add(int,int);
void print();
float mult(float,float);
int main(){
	int a=20,b=30;
	int c =add(a,b);
	printf("c=%d\n",c);
	float x=mult(2.3,3);
	printf("x=%f\n",x);
	print();
}
int add(int x,int y){
	return(x+y);
}
void print(){
	printf("Hello");
}
float mult(float a,float b){
	return(a*b);
}
