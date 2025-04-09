#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	fp=fopen("story.txt","r");
	while(ch!=EOF){
		ch=fgetc(fp);
		printf("%c",ch);
	}
}