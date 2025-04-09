//q1 assign 6
/*WAP to print the address/values of the 
different variables (int,float,char) using 
& and * operators.*/

#include<stdio.h>
int main()
{
	int i= 7;
	float t=8.8;
	char c= 'a';

	printf("%u\n",(&i));
	printf("%u\n",*(&i));

	printf("\n***********************\n\n");
	
	printf("%u\n",(&t));
	printf("%f\n",*(&t));
	
	printf("\n***********************\n\n");
	
	printf("%u\n",(&c));
	printf("%c\n",*(&c));
	
}