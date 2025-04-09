//q6 assign 7
#include<stdio.h>
struct student{
		char name[20];
		int roll_no;};
/*void func(struct student s1){
	strcpy(s1.name,"amit");
	s1.roll_no=23;
	printf("%s %d",s1.name,s1.roll_no);
}*/
struct student func(struct student s1){
	strcpy(s1.name,"amit");
	s1.roll_no=23;
	return s1;
}		
int main(){
	struct student s1,s2;
	s2=func(s1);
	printf("%s %d",s2.name,s2.roll_no);	
}