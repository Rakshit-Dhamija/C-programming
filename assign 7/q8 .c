//the latest update in int main is copied in other colum name of structure
#include<stdio.h>
#include<string.h>
union student{
	int roll;
	char name[20];
};
int main()
{
	union student s;
//	s.roll=20;
	strcpy(s.name,"b");
	s.roll=20;
	printf("%s   %d",s.name,s.roll);
}