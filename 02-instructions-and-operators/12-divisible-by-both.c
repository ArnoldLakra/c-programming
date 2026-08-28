#include<stdio.h>
int main () {
    // if the number is divisible by both 3 and 5
    // 1 means yes and 0 means no
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("%d", n%3==0 && n%5==0);
    return 0;
}