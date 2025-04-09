//q1 assign 5
// reversal of array
#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	int n=(sizeof(a)/sizeof(a[0]));
	//printf("%d",n);
//	for(int i=n;i>=0;i--){
	//	printf("%d",a[i]);
//	}
	int b[n],c=0;
	for (int j=n-1;j>=0;j--){
		b[c]=a[j];
		c++;
		//printf("%d",c);
	}
	for(int k=0;k<=n-1;k++){
		printf("%d \n",b[k]);
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
