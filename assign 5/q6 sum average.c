//q6 assign 5
// sum and average of array
#include<stdio.h>
int main(){
	float a[]={1,2,3,4,5},sum=0;
	float avg;
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("%f",sum);
	printf("\n%f",avg);
}