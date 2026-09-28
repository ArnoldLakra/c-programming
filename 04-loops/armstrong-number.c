#include<stdio.h>
int main() {
    // armstrong number for three digits
    int n=153, digit=0, sum=0;
    int a=n;
    while(a>0) {
        digit=a%10;
        a=a/10;
        sum=sum+digit*digit*digit;
    }
    if(n==sum) {
        printf("%d is an armstrong number", n);
    } else {
        printf("no");
    }
}