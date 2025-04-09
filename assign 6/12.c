// a6 - 11

#include<stdio.h>
#include<string.h>
int main( ) 

{ 
	int c=0;
	char name[25] ; 
	printf ( "Enter anything w/o space and less than 25 characters:" ) ; 
	scanf ( "%s", name ) ;
	strlwr(name);
	
	for(int z=0;z<=24;z++)
	{
		if(name[z]=='a'||name[z]=='e'||name[z]=='i'||name[z]=='o'||name[z]=='u')
	 	c++;
	}
	printf("%d",c);
} 