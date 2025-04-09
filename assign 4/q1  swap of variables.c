//q1 assign 4
//WAP to awap variables without temp
#include<stdio.h>
void swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d      b=%d",a,b);
}
void swap_temp(int a, int b){
	int temp=a;
	a=b;
	b=temp;
	printf("a=%d      b=%d",a,b);
}
int main(){
	swap(2,3);
	swap_temp(2,3);
}