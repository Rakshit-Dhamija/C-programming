//q1 assign 7
//Use arrays to input and output 3 names,
//roll numbers and marks.
#include<stdio.h>
int main(){
	struct student{
		char name[20];
		int roll_no;
		float marks;
	};
	struct student sl;
	scanf("%s%d%f",sl.name,&sl.roll_no,&sl.marks);
	printf("name:%s\troll no:%d\tmarks:%f",sl.name,sl.roll_no,sl.marks);
	struct student s2={"muskan",23,80.2};
	strcpy(s3.name,'rak');
	s3.roll_no=5
}