#include<stdio.h>
int main () {
    int n, m;
    printf("skip multiple from 1-100: ");
    scanf("%d", &m);
    printf("enter numebr: ");
    scanf("%d", &n);
    if(m>=1 && m<=100) {
    for(int i=1; i<=100; i++) {
        if(i==n) {
            break;
        }
        if(i%m==0) {
            continue;
        }
        printf("%d ", i);
    } } else {
        printf("invalid multiple");
    }
    return 0;
}