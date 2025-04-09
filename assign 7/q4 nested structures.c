//q4 assign 7
// nested structures
#include<stdio.h>
#include<string.h>
int main(){
	struct address{
		int house_no;
		int street_no;
		char city[20];
	};
	struct student{
		char name[20];
		int roll_no;
		struct address a;
	};
struct student s1;
strcpy(s1.name,"amit");
s1.roll_no=123;
s1.a.house_no=1234;
s1.a.street_no=5;
strcpy(s1.a.city,"patiala");
printf("%s %d %d %d %s",s1.name,s1.roll_no,s1.a.house_no,s1.a.street_no,s1.a.city);
}