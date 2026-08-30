#include<stdio.h>
int main () {
    // Taking age from the user and printing "Adult" and "minor" using ternary
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    (age>=18) ? printf("Adult") : printf("Minor");
    return 0;
}