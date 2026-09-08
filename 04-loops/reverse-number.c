#include<stdio.h>
int main() {
    // Take a number and reverse its digits
    int n=12345;
    int digit;
    while(n>0) {
        digit=n%10;              // taking the last digit
        n=n/10;                    // removing the last digit
        printf("%d", digit);       
    }
}