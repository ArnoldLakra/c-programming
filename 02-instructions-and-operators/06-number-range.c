#include<stdio.h>
int main () {
    // Take a number and check whether it is between 10 and 50, including 10 and 50.
    // 1 is true and 0 is false
    int number;
    printf("enter a number: ");
    scanf("%d", &number);
    printf("The number is between 10 and 50: %d", 10<=number && number<=50);
    return 0;
}