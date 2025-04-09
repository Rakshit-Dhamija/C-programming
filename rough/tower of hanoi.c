#include <stdio.h> 
void tower(int n, char A, char C, char B) ;
int main() { 
int n;
printf("\n Enter the number of disks: "); scanf("%d",&n);
tower(n, 'A', 'C', 'B'); // A, B and C are names of poles; A to C via B 
return 0; 
} 
void tower(int n, char A, char C, char B) { 
	if (n == 0) return; 
	tower(n-1, A, B, C);   
	printf("\n Move disk %d from rod %c to rod %c", n, A,C); 
	tower(n-1, B,C,A); 
} 
