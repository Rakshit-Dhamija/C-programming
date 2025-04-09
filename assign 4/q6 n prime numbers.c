//q6 assign 4
// n prime numbers
#include<stdio.h>
#include<math.h>
/*int prime (int x){
	int i, test; 
	i=2, test =0;
	while ((i <= sqrt(x)) && (test ==0)){
		if (x%i==0) test = 1; 
		i++;
	}
	return i;
}
int main(){
	int n;
	printf("Enter number of primes:");
	scanf("%d",&n);
	int i,p[n];
	for(i=0;i<n;i++){
		for(int j=0;j<=100;j++)
		printf("\n%d",prime(j));
	}
}
*/
/*
#include<stdio.h>
int main()
{
    int n,i = 3, count, c;
    printf("\nEnter the number of prime numbers required :  ");
    scanf("%d", &n);
    if(n >= 1)
    {
        printf("\nFirst %d prime numbers are :  ", n);
        printf("2 ");
    }
    // iteration for n prime numbers
    // i is the number to be checked in each iteration starting from 3
    for(count = 2; count <= n; i++)  
    {
        // iteration to check c is prime or not
        for(c = 2; c < i; c++)
        {
            if(i%c == 0)
                break;
        }
        if(c == i)  // c is prime
        {
            printf("%d ", i);
            count++;    // increment the count of prime numbers
        }
    }
    return 0;
}*/
 
#include<stdio.h>
int main(){
	int i,j,n=5;
	for(i=0;i<n;i++){
		int a=0;
		for(int k=2;k<10;k++){
		for(j=a;j<10;j++){
			if(k%j==0){
				continue;
			}
			else
			a++;
		}
	}
	printf("%d",a);
	}
}