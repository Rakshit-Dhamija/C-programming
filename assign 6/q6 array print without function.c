//q6 assign 6
//WAP to pass and return an array out of a function
#include<stdio.h>
/*void print(int *arr){
	int i; 
	for(i=0;i<5;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int arr[5]={1,2,3,4,5};
	print(arr);
}*/

int *print(int*arr){
	int i;
	arr[4];
	return arr;
}
int main(){
	int i,*p,arr[5]={1,2,3,4,5};
	p=print(arr);
	for(i=0;i<5;i++)
	{
		printf("%d",p[i]);
	}
}