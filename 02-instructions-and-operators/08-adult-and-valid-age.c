#include<stdio.h>
int main () {
    // Is the person at least 18 and less than or equal to 60 ?
    // 1 is true and 0 is false
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    printf("%d", age>=18 && age<=60);
    return 0;
}