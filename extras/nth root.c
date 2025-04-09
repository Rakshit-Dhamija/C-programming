#include<math.h>
#include<stdio.h>
int main(){
       float n;
	printf("enter the nth root to be found:");
	scanf("%f",&n);
	float x;
	printf("the number top find the root of:");
	scanf("%f",&x);
	float z=1/n;
	float result= pow(x,z);
	printf("answer %f",result);
	printf("\n%f",z);
	return 0;
}
