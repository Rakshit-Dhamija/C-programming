#include <stdio.h>
// Driver's Code
int main(){
	
	int arr[] = { 12, 34, 10, 6, 40, 56, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);
	// Using a last element as search element
	int i,key = 10; 
	// Function call
    for(i = 0; i<n;i++){
        if(arr[i]==key){
            printf("Element found at %d",i+1);
            continue;
        }
    }
	return 0;
}