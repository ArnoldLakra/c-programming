#include<stdio.h>
int main() {
    // Taking age from the user and determining whether the person is eligible to vote
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if(age>=18) {
        printf("you are eligible to vote\n");
    } else {
        printf("you are not eligible to vote\n");
    }
    printf("Thank you");
    return 0;
}