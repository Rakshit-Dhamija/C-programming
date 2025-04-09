#include<stdio.h>
int main(){
	//char str1[20];
	FILE *fp;
//	fp=fopen("C:\\Users\\raksh\\Desktop\\Assignments\\assign 8\\test.txt","r");
	fp=fopen("story.txt","r");
	char ch;
	while(ch!=EOF){
		ch=fgetc(fp);
		printf("%c",ch);
	}
	//fscanf(fp,"%s",str1);
	//printf("%s",str1);
}