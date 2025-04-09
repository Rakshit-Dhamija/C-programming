#include<stdio.h>

int main()
{
	int i,j,c=0,n=7;
	for(i=3;i<n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			c++;
			{
				if(c==1)
				printf("\nprime");
				else{
				printf("\ncomposite");
				break;}
			}
		}
	}
}