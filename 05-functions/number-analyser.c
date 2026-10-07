#include<stdio.h>
// Input : negetive-positive numbers. Output : Digit count, sum of those digits, number reverse, palindrome checker, even/odd checker
int Digits(int n) {
    int count=0;
    if(n==0) {
        return 1;
    }
    if(n<0) {
        int count=0;
        n=n*-1;
        while(n>0) {
            n=n/10;
            count++;
        }
        return count;
    } else {
        int count=0;
        while(n>0) {
            n=n/10;
            count++;
        }
        return count;
    }
}
int DigitSum(int n) {
    int sum=0, digit=0;
    if(n<0) {
        n=n*-1;
        while(n>0) {
            digit=n%10;
            n=n/10;
            sum=sum+digit;
        }
        return sum;
    } else {
        while(n>0) {
            digit=n%10;
            n=n/10;
            sum=sum+digit;
        }
        return sum;
    }
    return sum;
}
int Reverse(int n) {
    int digit=0, reverse=0;
    if(n<0) {
        n=n*-1;
        while(n>0) {
            digit=n%10;
            n=n/10;
            reverse=reverse*10+digit;
        }
        reverse=reverse*-1;
        return reverse;
    } else {
        while(n>0) {
        digit=n%10;
        n=n/10;
        reverse=reverse*10+digit;
    }
    return reverse;
    }
}
int Palindrome(int n) {
    int original=n, digit=0, reverse=0;
    while(n>0) {
        digit=n%10;
        n=n/10;
        reverse=reverse*10+digit;
    }
    if(original==reverse) {
        return 1;
    } else {
        return 0;
    }
}
int EvenOdd(int n) {
    if(n%2==0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    printf("Digits: %d\n", Digits(n));
    printf("Digit Sum: %d\n", DigitSum(n));
    printf("Reverse: %d\n", Reverse(n));
    int x=EvenOdd(n), y=Palindrome(n);
    (y==1) ? printf("Palindrome: yes\n") : printf("Palindrome: no\n");
    (x==1) ? printf("Even/Odd: Even") : printf("Even/Odd: Odd");
    return 0;
}