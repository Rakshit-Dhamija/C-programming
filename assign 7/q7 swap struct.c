#include<stdio.h>
#include<string.h>
struct student{
		char name[20];
		int roll_no;};
typedef struct{
	char name[20];
	int roll;
}stud;
int main(){
	int a;
	struct student s1,s2,t;
	strcpy(s1.name,"rad");
	s1.roll_no=1;
	strcpy(s2.name,"dar");
	s2.roll_no=2;
	printf("s1 %s  %d",s1.name,s1.roll_no);
	printf("\ns2 %s  %d",s2.name,s2.roll_no);
	t=s1;
	s1=s2;
	s2=t;
	printf("\ns1 %s  %d",s1.name,s1.roll_no);
	printf("\ns2 %s  %d",s2.name,s2.roll_no);
	struct student s3={"rad",1};
	printf("\ns3%s  %d",s3.name,s3.roll_no);
	stud  s={"rad",12};
	printf("\n%s  %d",s.name,s.roll);
}