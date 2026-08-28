#include<stdio.h>
int main () {
    // Take marks and print whether the marks are greater than or equal to 40.
    // 1 is true and 0 is false
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);
    printf("your marks are greater or equal to 40: %d", marks>=40 && marks<=100);
    return 0;
}