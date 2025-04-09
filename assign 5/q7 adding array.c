//q7 assign 5
//merge 2 arrays
#include<stdio.h>
int main(){
	int a[]={1,2,3,4},b[]={5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	int n2=(sizeof(b)/sizeof(b[0]));
	int n3=n+n2;
	int c[n3];
	int z=0;
	//printf("%d",n2);
	for(int i=0;i<n;i++){
		c[i]=a[i];
		z++;
	}
	//printf("%d",z);
	for(int i=0;i<n2;i++){
		c[z]=b[i];
		z++;
	}
	for(int i=0;i<n3;i++){
		printf("%d",c[i]);
	}
}