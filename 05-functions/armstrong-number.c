#include<stdio.h>
int armstrong(int n) {
    int digit=0, count=0, arm=0, power=0, a=n;
    while(a>0) {
        a=a/10;
        count++;
    }
    a=n;
    while(a>0) {
        digit=a%10;
        a=a/10;
        power=digit;
        for(int i=2; i<=count; i++) {
            power=power*digit;
        }
        arm=arm+power;
    }
    if(n==arm) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int x=armstrong(n);
    (x==1) ? printf("yes") : printf("no");
}