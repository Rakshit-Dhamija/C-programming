//q5 assign 2
// swap
#include<stdio.h>
int main(){
    int x=5,y=10,t;
    printf("x:%d  y:%d",x,y);
    t=x;
    x=y;
    y=t;
    printf("\nx:%d  y:%d",x,y);
    return 0;
}