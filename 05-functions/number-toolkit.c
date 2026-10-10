#include<stdio.h>
int prime(int n) {
    int count=0;
    for(int i=1; i<=n; i++) {
        if(n%i==0) {
            count++;
        }
    }
    return (count==2) ? 1 : 0;
}
int palindrome(int n){
    int digit=0, reverse=0;
    if(n<0) {
        n=n*-1;
    }
    int a=n;
    while(a>0) {
        digit=a%10;
        a=a/10;
        reverse=reverse*10+digit;
    }
    return (n==reverse) ? 1 : 0;
}
int armstrong(int n) {
    int digit=0, count=0, a=n, arm=0;
    if(n<0) {
        return 0;
    } 
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
int perfect(int n){
    int sum=0;
    if(n<0) {
        n=n*-1;
    }
    for(int i=1; i<n; i++) {
        if(n%i==0) {
            sum=sum+i;
        }
    }
    return (n==sum) ? 1 : 0;
}
int reverse(int n) {
    int digit=0, reverse=0;
    while(n>0) {
        digit=n%10;
        n=n/10;
        reverse=reverse*10+digit;
    }
    return reverse;
}
int digitSum(int n) {
    int sum=0, digit=0;
    if(n<0) {
        n=n*-1;
    }
    while(n>0) {
        digit=n%10;
        n=n/10;
        sum=sum+digit;
    }
    return sum;
}
int gcd(int first, int second) {
    if(first<0) {
        first=first*-1;
    }
    if(second<0) {
        second=second*-1;
    }
    int larger=first, gcd=1;
    if(second>=larger) {
        larger=second;
    } 
    for(int i=1; i<larger; i++) {
        if(first%i==0 && second%i==0) {
            gcd=i;
        }
    }
    return gcd;
}
int lcm(int first, int second){
    int x=gcd(first, second);
    return first*second/x;
}
int main() {
    int choice, n, prm, palin, arm, perf, first, second;
    while(choice!=9) {
    printf("============================\n");
    printf("  NUMBER TOOLKIT\n");
    printf("============================\n\n");
    printf("1. Check Prime\n");
    printf("2. Check Palindrome\n");
    printf("3. Check Armstrong\n");
    printf("4. Check Perfect\n");
    printf("5. Reverse Number\n");
    printf("6. Digit Sum\n");
    printf("7. GCD\n");
    printf("8. LCM\n");
    printf("9. Exit\n\n");
    printf("Choose: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1 : printf("enter number: ");
        scanf("%d", &n);
        prm=prime(n);
        (prm==1) ? printf("Prime: yes\n\n") : printf("Prime: no\n\n");
        break;
        case 2 : printf("enter number: ");
        scanf("%d", &n);
        palin=palindrome(n);
        (palin==1) ? printf("palindrome: yes\n\n") : printf("palindrome: no\n\n");
        break;
        case 3 : printf("enter number: ");
        scanf("%d", &n);
        arm=armstrong(n);
        (arm==1) ? printf("armstrong: yes\n\n") : printf("armstrong: no\n\n");
        break;
        case 4 : printf("enter number: ");
        scanf("%d", &n);
        perf=perfect(n);
        (perf==1) ? printf("perfect: yes\n\n") : printf("perfect: no\n\n");
        break;
        case 5 : printf("enter number: ");
        scanf("%d", &n);
        printf("Reverse: %d\n\n", reverse(n));
        break;
        case 6 : printf("enter number: ");
        scanf("%d", &n);
        printf("Digit sum: %d\n\n", digitSum(n));
        break;
        case 7 : printf("enter first number: ");
        scanf("%d", &first);
        printf("enter second number: ");
        scanf("%d", &second);
        printf("GCD: %d\n\n", gcd(first, second));
        break;
        case 8 : printf("enter first number: ");
        scanf("%d", &first);
        printf("enter second number: ");
        scanf("%d", &second);
        printf("LCM: %d\n\n", lcm(first, second));
        break;
        case 9 : printf("Exiting...");
        break;
        default : printf("invalid input\n\n");
        break;
    } }
    return 0;
}