// a6 - 8
// with string functions

#include<stdio.h>
#include<string.h>
int main( ) 
{ 
	char a[] = "Hello" ; 
	char b[20] ; 
	strcpy (b,a) ; 
	printf ("source string = %s", a ) ; 
	printf ("\ntarget string = %s", b) ; 
} 