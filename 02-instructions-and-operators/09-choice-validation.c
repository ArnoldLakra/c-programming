#include<stdio.h>
int main () {
    // 1 is true and 0 is false
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("your number is either 1 or 2: %d", a==1 || a==2);
    return 0;
}