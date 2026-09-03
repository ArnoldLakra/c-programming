#include<stdio.h>
int main () {
    // is the number not equal to zero
    // 1 is true and 0 is false
    int a;
    printf("enter a number:  ");
    scanf("%d", &a);
    printf("the number is non-zero: %d", a!=0);
    return 0;
}