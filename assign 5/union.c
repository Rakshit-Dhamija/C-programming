// union
#include<stdio.h>
int main(){
	union test {int x, y;};
    union test t;
    t.x = 2; 
    printf("%d, %d", t.x,t.y);
    t.y = 10; 
    printf("\n%d, %d", t.x,t.y);
    return 0;
}