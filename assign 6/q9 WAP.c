//q9 assign 6
//WAP to 
#include<stdio.h>
#include<string.h>
int main(){
	char a[]="UNIVESITY";
	for (int i=0;i<strlen(a);i=i+2){
		for (int j=0;j<i+2;j++){
			printf("%c", a[j]);
		}
		printf("\n");
	}
	for (int k=0;k<strlen(a);k=k+2){
		for (int l=strlen(a);l>=0;l--){
			int x=l;
			printf("%c", a[x]);
		}
		printf("\n");
	}
	/*{
		//printf("%d",k);
		for(int l=0;l=;l=l-2)
		{
			printf("%d",l);
			printf("%c",a[l]);
		}
		printf("\n");
		printf("%d",strlen(a));
	}*/
}