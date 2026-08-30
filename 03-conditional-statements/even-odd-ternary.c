#include<stdio.h>
int main () {
    // Checking whether a number is even or odd using the ternary operator
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    (a%2==0) ? printf("even") : printf("odd");
    return 0;
}