#include<stdio.h>
int main () {
    // Take a person's age and print whether their age is 18 or above
    // 1 is true
    // 0 is false
    int age;
    printf("enter your age:  ");
    scanf("%d", &age);
    printf("your age is above 18: %d", age>=18);
    return 0;
}