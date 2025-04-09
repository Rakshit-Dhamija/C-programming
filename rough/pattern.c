#include<stdio.h>
int main(){
	int n,k,l;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=1;j<=2*i;j++){
		printf("*");
	}
	printf("\n");}
	for(k=n;k>0;k=k-1){
		for(l=2*k;l>0;l=l-1){
			//printf("%d",l);
			printf("*");
	}
	printf("\n");
	}
}