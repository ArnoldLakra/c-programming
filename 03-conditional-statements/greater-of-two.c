#include<stdio.h>
int main () {
    // Taking two numbers from the user and printing the greater number
    int a, b;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter the second number: ");
    scanf("%d", &b);
    if(a>b) {
        printf("%d is greater than %d", a, b);
    } else if (a<b) {
        printf("%d is greater than %d", b, a);
    } else {
        printf("both are equal");
    }
    return 0;
}