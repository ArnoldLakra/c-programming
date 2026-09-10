#include<stdio.h>
int main() {
    int original=121;         
    int n, digit;    
    n=original;         // n has been assigned original value because it will be keep changing whereas i dont want any change in original variable
    int reverse=0;
    while(n>0) {
        digit=n%10;          // this digit will take the last digit of the number and in the next loop it will take the next number
        n=n/10;              // this will remove the last digit from the n number
        reverse=reverse*10+digit;   // here's the logic reverse=0*10+1 then in the next loop reverse=1*10+2 which will give a new number
    }  // i have not put an iteration becasue the n is already getting lower and will gradually become 0
    printf("%d %d\n", original, reverse);
    if(original==reverse) {
        printf("it is a palindrome number");
    } else {
        printf("it is not a palindrome number");
    }
    return 0;
}