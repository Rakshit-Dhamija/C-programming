//q3 assign 4
//WAP to chek prime or not
#include<stdio.h>
void prime(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0){
			printf("not prime");
			break;}
		else if(a%1==0 && a%a==0){
			printf("prime");
			break;}
		else{
			printf("Wrong input");
			break;}
	}
}
int main(){
	int x;
	scanf("%d",&x);
	prime(x);
}