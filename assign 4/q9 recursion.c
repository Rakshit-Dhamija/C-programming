//q9 assign 4
//recursion a factorial,fibonacci,summation of n
#include<stdio.h>
int fibonacci(int num)
{
    if (num == 0)
    {
     return 0;
    }
    else if (num == 1)
    {
     return 1;
    }
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}
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
	d=facto(a);
	printf("factorial by recursion=%d",d);
	int num;
    printf("\nEnter the number of elements to be in the series : ");
    scanf("%d", &num);
    int i;
    for (i = 0; i < num; i++)
    {
    printf("%d \t", fibonacci(i));
}
}
