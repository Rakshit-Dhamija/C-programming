#include<stdio.h>
int main(){
	int a[5];
	/*for(int i=0;i<(sizeof(a))/2;i++){
		a[sizeof(a)]=a[i];
	}*/
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<(sizeof(a))/4;j++){
	printf("\n%d",a[j]);}
	//printf("\n%d",sizeof(a));
}