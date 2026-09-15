#include<stdio.h>
int main () {
    // ask the user to enter a number between 1 and 100
    // if they enter invalid number, keep asking
    int number=1;
    while(number>=1 && number<=100) {
        printf("enter number: ");
        scanf("%d", &number);
        if(number>=1 && number<=100) {
            printf("accepted");
            break;                     // breaks the loop if number is between 1 and 100
        } else {
            printf("invalid\n");
            number=1;                 // continues the loop if number is invalid
        }
    }
    return 0;
}