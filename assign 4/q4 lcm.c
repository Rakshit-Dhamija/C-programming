//q4 assign 4 	
// lcm
#include<stdio.h>
void lcmm(int a,int b)
{
	int i,max,lcm=0;
	max=(a>b)?(a):(b);
	for(max=1;;max++)
	{
		if((max%a==0)&&(max%b==0))
		{
			lcm=max;
			break;
		}
	}
	printf("lcm = %d",lcm);
}
int main()
{
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	lcmm(a,b);
}