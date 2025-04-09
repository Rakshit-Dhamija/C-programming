//q5 assign 7
//dot and arrow
#include<stdio.h>
int main(){
	struct student{
		char name[20];
		int roll_no;
	};
	struct student *s2;
	struct student s1={"amit",123};
	s2=&s1;
	printf("%s%d",s2->name,s2->roll_no);
}
