#include<stdio.h>
int main () {
    // Taking a number 1-12 from the user and printing the corresponding month using switch
    int a;
    printf("enter a month (1-12): ");
    scanf("%d", &a);
    switch (a) {
        case 1 : printf("January");
        break;
        case 2 : printf("Ferbruary");
        break;
        case 3 : printf("March");
        break;
        case 4 : printf("APRIL");
        break;
        case 5 : printf("May");
        break;
        case 6 : printf("June");
        break;
        case 7 : printf("July");
        break;
        case 8 : printf("August");
        break;
        case 9 : printf("September");
        break;
        case 10 : printf("October");
        break;
        case 11 : printf("November");
        break;
        case 12 : printf("December");
        break;
        default : printf("invalid month");
    }
    return 0;
}