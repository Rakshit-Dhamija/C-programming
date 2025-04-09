//log(a^5//sqrt(b))
//log(32/3)
#include<stdio.h>
#include<math.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%f",(log(pow(a,5)/sqrt(b))/log(10)));
}