//q2 assign 4
// factorial funtion
int fact(int a){
	int i,fac=1;
	for(i=a;i>=1;i--){
		//printf("%d",i);
		fac=fac*i;
	}
	return (fac);
}
//recursion functions
int facto(int a){
	if(a==0 || a==1)
		return 1;
	else
		return a*facto(a-1);
}
int main(){
	int a,c,d;
	printf("Enter number for factorial:");
	scanf("%d",&a);
	c=fact(a);
	d=facto(a);
	printf("factorial=%d\n",c);
	printf("factorial by recursion=%d",d);
}