//q3 assign 5
//delete an element
#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]),e=4,f;
	//printf("Enter element:");
	//scanf("%d",&e);
	for(int i=0;i<=n;i++){
		if(a[i]==e){
		f=i;
		break;}
	}
//printf("%d",f);
	for(int i=f;i<n-1;i++){
		a[i]=a[i+1];
	//	printf("%d",i);
}
	for(int i=0;i<n-1;i++)
	printf("%d",a[i]);
}