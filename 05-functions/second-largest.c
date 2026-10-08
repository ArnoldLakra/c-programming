#include<stdio.h>
int secondLargest(int a, int b, int c, int d, int e, int f, int largest) {
    int n=0, secondLargest=0;
    if(a>=n && a<largest) {
        secondLargest=a;
    }
    if(b>=n && b<largest) {
        secondLargest=b;
    }
    if(c>=n && c<largest) {
        secondLargest=c;
    } 
    if(d>=n && d<largest) {
        secondLargest=d;
    } 
    if(e>=n && e<largest) {
        secondLargest=e;
    } 
    if(f>=n && f<largest) {
        secondLargest=f;
    }
    return secondLargest;
}
int largest(int a, int b, int c, int d, int e, int f) {
    int largest=a;
    if(a>=b && a>=c && a>=d && a>=e && a>=f) {
    } else if(b>=a && b>=c && b>=d && b>=e && b>=f) {
        largest=b;
    } else if(c>=a && c>=b && c>=d && c>=e && c>=f) {
        largest=c;
    } else if(d>=a && d>=b && d>=c && d>=e && d>=f) {
        largest=d;
    } else if(e>=a && e>=b && e>=c && e>=d && e>=f) {
        largest=e;
    } else if(f>=a && f>=b && f>=c && f>=d && f>=e) {
        largest=f;
    }
    return largest;
}
int main() {
    int a=10, b=45, c=23, d=45, e=7, f=31;
    int first=largest(a, b, c, d, e, f);
    printf("Largest: %d\n", first);
    int second=secondLargest(a, b, c, d, e, f, first);
    printf("Second largest: %d", second);
    return 0;
}