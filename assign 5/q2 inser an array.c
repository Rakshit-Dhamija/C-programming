//q2 assign 5
//insert an element
#include<stdio.h>
int main(){
	int a[]={1,2,3,5,6};
	int n=sizeof(a)/sizeof(a[0]),f,e;
	printf("Enter element:");
	scanf("%d",&e);
	printf("Enter index:");
	scanf("%d",&f);
	for(int i=n;i>=f;i--){
		a[i+1]=a[i];
	//	printf("%d",i);
}
	a[f]=e;
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
}