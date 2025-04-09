#include<stdio.h>
int main(){
	struct student{
		char name[20];
		int roll_no;
		float marks;
	};
	struct student s[1],s2[1];
	for (int i=0;i<1;i++)
		scanf("%s  %d  %f",s[i].name,&s[i].roll_no,&s[i].marks);
	for (int j=0;j<1;j++)
		printf("name:%s  rollno:%d  marks:%f\n",s[j].name,s[j].roll_no,s[j].marks);
	for(int i=0;i<1;i++)
		s2[i]=s[i];
	for (int j=0;j<1;j++)
		printf("name:%s  rollno:%d  marks:%f\n",s2[j].name,s2[j].roll_no,s2[j].marks);
}