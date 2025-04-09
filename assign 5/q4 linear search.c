// q4 assign 5
// linear search
#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5,6};
	int n=sizeof(a)/sizeof(a[0]),e,f;
	printf("Enter element:");
	scanf("%d",&e);
	for(int i=0;i<=n;i++){
		if(a[i]==e){
		f=i+1;
		break;}
	}
printf("search element is at :%d",f);
}