#include<stdio.h>
int main () {
    int a;
    printf("enter an integer: ");
    scanf("%d", &a);
    if(a>0) {
        printf("positive");
    } else if(a==0) {
        printf("zero");
    } else {
        printf("negetive");
    }
    return 0;
}