//q1 assign 3
//small alphabet capital aplhabet number special character
#include<stdio.h>
int main(){
	char a;
	printf("Enter input:");
	scanf("%c",&a);
	//printf("%d",a);
	if(a>=65 && a<=90){
		printf("Capital character");
	}
	else if(a>=97 && a<=122){
		printf("Small character");
	}
	else if(a>=48 && a<=49){
		printf("int");
	}
	else{
		printf("special character");
	}
	return 0;
}