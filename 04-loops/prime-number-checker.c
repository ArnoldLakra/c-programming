#include<stdio.h>
int main() {
    // taking the input and checking if it is a prime number
    // 1 means prime and 0 means not prime
    int n;
    int isprime=1;              // assume it is a prime number
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i=2; i<=n-1; i++) {
        if(n%i==0) {
            isprime=0;          // here variable changes
            break;
        }
    }
    if(n<2) {
        printf("not prime");
    } else if(isprime==1) {
        printf("prime"); 
    } else {
        printf("not prime");
    }
    return 0;
}