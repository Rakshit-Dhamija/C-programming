#include<stdio.h>
int main(){
	int i;
	char *s="abcd123";
	char a[]={'a','b','c','d','e'};
	/*for(i=0;i<=10;i++)
	{
	
	printf("%c",s[i]);*/
	//printf("%c",a[i]);

	s[1]=s[5];
	for(i=0;i<=10;i++)
	{	
	printf("%c",s[i]);
	//printf("%c",a[i]);
}
}