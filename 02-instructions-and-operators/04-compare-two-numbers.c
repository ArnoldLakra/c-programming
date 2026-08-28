#include<stdio.h>
int main () {
    // comparing two numbers
    //here we are assuming 1 is true and 0 is false
    //the output guves either 0 or 1
    int a,b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("first is greater than the second %d\n", a>b);
    printf("first is less than second %d\n", a<b);
    printf("both are equal %d", a==b);
    return 0;
}