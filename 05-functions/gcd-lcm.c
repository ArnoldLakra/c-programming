#include<stdio.h>
int gcd(int a, int b){
    int gcd=0;
    if(a<0) {
        a=a*-1;
    }
    if(b<0) {
        b=b*-1;
    }
    int larger=a;
    if(a>b) {
    } else {
        larger=b;
    }
    for(int i=1; i<larger; i++) {
        if(a%i==0 && b%i==0) {
            gcd=i;
        }
    }
    return gcd;
}
int lcm(int x, int a, int b) {
    if(a<0) {
        a=a*-1;
    }
    if(b<0) {
        b=b*-1;
    }
    return a*b/x;
}
int main() {
    int a, b, x, y;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    x=gcd(a, b);
    printf("\nGreatest Common Divisor: %d\n", x);
    y=lcm(x, a, b);
    printf("Least Common Multiple: %d", y);
}