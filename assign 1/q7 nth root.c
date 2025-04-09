//q7  assign 1
//WAP to find nth root
#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    printf("Enter the nth root:");
    scanf("%f",&a);
    printf("\nEnter the number:");
    scanf("%f",&b);
    float z=1.0/a;
    float result=pow(b,z);
    printf("\nanswer %f",result);
    printf("\n%f",z);
}