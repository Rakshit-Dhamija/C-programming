#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("test.txt","w");
	fputc('A',fp);
	fprintf(fp,"How Are you");
	fputs("great",fp);
	fclose(fp);
}