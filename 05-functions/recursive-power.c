#include<stdio.h>
float power(float base, int exponent){
    int a=exponent, pow=base;
    if(base==0) {
        return 0;
    }
    if(0==exponent) {
        return 1;
    }
    if(1==exponent || -1==exponent) {
        return base;
    }
    if(exponent<0) {
        exponent=exponent*-1;
    }
    return base*power(base, exponent-1);
}
int main() {
    int base, exponent;
    printf("enter base: ");
    scanf("%d", &base);
    printf("enter exponent: ");
    scanf("%d", &exponent);
    if(exponent>=0) {
        printf("%f", power(base, exponent));
    } else {
        printf("%f", 1.0/power(base, exponent));
    }
    return 0;
}