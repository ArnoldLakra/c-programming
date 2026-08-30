#include<stdio.h>
int main() {
    int a, b, c;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b) {
        if(a>c) {
            printf("%d is the greatest", a);
        } else {
            printf("%d is the greatest", c);
        }
    } else if(b>a) {
        if(b>c) {
            printf("%d is the greatest", b);
        } else {
            printf("%d is the greatest", c);
        }
    } else {
        printf("%d is the greatest", c);
    }
    return 0;
}