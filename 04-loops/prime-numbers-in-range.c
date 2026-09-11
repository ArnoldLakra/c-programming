#include<stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i++) {   // runs the code till the number n
        int isprime=1;          // isprime is written in for loop becuase the process has to repeat again for a new number check
        for(int j=2; j<=i-1; j++) {
            if(i%j==0) {
                isprime=0;
                break;
            }
        }
        if(isprime==1) {
            printf("%d ", i);
        }
    }
    return 0;
}