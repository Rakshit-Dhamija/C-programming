// e^x expansion
#include<stdio.h>
#include<math.h>
float fact(float a){
	if(a==0 || a==1)
		return 1;
	else
		return a*fact(a-1);
}
/*int fact(int n){
	if(n==0){
		return 1;
	}
	else{
		n=n*fact(n-1);
		return n;
	}
}*/
int main(){
	float a=2.3,sum,n;
	scanf("%f",&n);
	sum=1;
	for(float i=1;i<n;i++){
		sum=sum+(pow(a,i)/fact(i));
		//a++;
	}
	printf("Power of e^x:%f",sum);
}