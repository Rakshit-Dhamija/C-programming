#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	for(int i=(sizeof(a)/sizeof(a[0]));i>=0;i--){
		printf("%d",a[i]);
	}
	//int n;
	//scanf("%d",&n);
	/*int a[5];
	printf("%d",sizeof(a));
	for(int i=0;i<sizeof(n);i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("\n%d",a[i]);
	}*/
	
}
