#include<stdio.h>
int even(int n) {
    return (n%2==0) ? 1 : 0;
}
int prime(int n) {
    int count=0;
    if(n<2) {
        return 0;
    } else {
        for(int i=1; i<=n; i++) {
            if(n%i==0) {
                count++;
            }
        }
        return (count==2) ? 1 : 0;
    }
}
int palindrome(int n) {
    int digit=0, reverse=0, a=n;
    if(n>0) {
    while(a>0) {
        digit=a%10;
        a=a/10;
        reverse=reverse*10+digit;
    }
    return (n==reverse) ? 1 : 0; 
} else {
    a=a*-1;
    while(a>0) {
        digit=a%10;
        a=a/10;
        reverse=reverse*10+digit;
    }
    reverse=reverse*-1;
    return (n==reverse) ? 1 : 0;
}
}
int armstrong(int n) {
    int digit=0, a=n, count=0, arm=0;
    while(a>0) {
        a=a/10;
        count++;
    }
    a=n;
    while(a>0) {
        digit=a%10;
        a=a/10;
        int power=digit;
        for(int i=2; i<=count; i++) {
            power=power*digit;
        }
        arm=arm+power;
    }
    return (n==arm) ? 1 : 0;
}
int perfectnumber(int n) {
    int sum=0;
    for(int i=1; i<n; i++) {
        if(n%i==0) {
            sum=sum+i;
        }
    }
    return (n==sum) ? 1 : 0;
}
int digitCount(int n) {
    int count=0;
    if(n==0) {
        return 1;
    }
    if(n>0) {
        while(n>0) {
            n=n/10;
            count++;
        }
        return count;
    } else {
        n=n*-1;
        while(n>0) {
            n=n/10;
            count++;
        }
        return count;
    }
}
int digitSum(int n) {
    int digit=0, sum=0;
    if(n>0) {
        while(n>0) {
            digit=n%10;
            n=n/10;
            sum=sum+digit;
        }
        return sum;
    } else {
        n=n*-1;
        while(n>0) {
            digit=n%10;
            n=n/10;
            sum=sum+digit;
        }
        return sum;
    }
}
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int a=even(n);
    (a==1) ? printf("Even: yes\n") : printf("Even: no\n");
    int b=prime(n);
    (b==1) ? printf("Prime: yes\n") : printf("Prime: no\n");
    int c=palindrome(n);
    (c==1) ? printf("Palindrome: yes\n") : printf("Palindrome: no\n");
    int d=armstrong(n);
    (d==1) ? printf("Armstrong: yes\n") : printf("Armstrong: no\n");
    int e=perfectnumber(n);
    (e==1) ? printf("Perfect Number: yes\n") : printf("Perfect Number: no\n");
    printf("Digit count: %d\n", digitCount(n));
    printf("Digit sum: %d", digitSum(n));
    return 0;
}