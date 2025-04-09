//q2 assign 6
// %p%x%u ussage
#include<stdio.h>
int main(){
	int i=2;
	printf("%d",i);
	printf("%d",*(&i));
	int *j;
	j=&i;
	printf("%d\n",&j);
	printf("%p\n",&j);
	printf("%u\n",&j);
	printf("%x\n",&j);
}