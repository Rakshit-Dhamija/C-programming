//q6 assign 1
//WAP to add,subtract,divide
#include<stdio.h>
int main(){
   float a,b;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b",b);
    scanf("%f",&b);
     int add=a+b;
     printf("\nAddition is:%d",add);
     int sub=a-b;
     printf("\nSubtracted is:%d",sub);
     float mul=a*b;
     printf("\nMultiply is:%.3f",mul);
     float div=a/b;
     printf("\nDIvide is:%f",div);
}