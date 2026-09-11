#include<stdio.h>
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {   // runs the code till the number n
        int isprime=1;          // isprime is written in for loop becuase the process has to repeat again for a new number check
        if(i<2) {
        } else {
            for(int j=2; j<=i-1; j++) {    // checking if the number is prime
                if(i%j==0) {
                    isprime=0;
                    break;
                }
            }
        }
        if(isprime==1) {
            printf("%d ", i);
        }
    }
    return 0;
}