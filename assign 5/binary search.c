#include<stdio.h>
int binSearch(int A[], int l, int r, int x) { 
   if (r >= l) { 
        int mid = (r + l)/2; 
        if (A[mid] == x)  return mid; 
        if (A[mid] > x)  return binSearch(A,l,mid-1,x); 
        else return binSearch(A,mid+1,r,x); 
   } return -1;
}
int main(){
int A[] = { 55, 56,65, 75, 78, 78, 90 }; 
int  x; //to be searched
scanf("%d",&x);
int n = 7; //array size
int index = binSearch(A,0,n,x);  
//Array,left position, right position, element
printf("Index:%d",index+1);
}