#include<stdio.h>
int main() {
    int n;
    int a=0;
    int b=1;
    int next=0;
    printf("enter a number: ");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for(int i=1; i<=n-2; i++) {
        next=a+b;
        a=b;
        b=next;
        printf("%d ", next);
    }
    return 0;
}