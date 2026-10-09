#include<stdio.h>
int perfectnumber(int n) {
    int a=n, sum=0;
    if(n<=1) {
        return 0;
    }
    for(int i=1; i<n; i++) {
       if(n%i==0) {
        sum=sum+i;
       }
    }
    return (n==sum) ? 1 : 0;
}
int main() {
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    int x=perfectnumber(n);
    (x==1) ? printf("perfect number: yes") : printf("perfect number: no");
    return 0;
}