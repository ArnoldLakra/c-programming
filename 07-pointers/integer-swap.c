#include<stdio.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main(){
    int a=5, b=10;
    int *x=&a, *y=&b;
    swap(x, y);
    printf("a=%d, b=%d", a, b);
    return 0;
}