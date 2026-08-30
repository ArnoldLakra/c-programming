#include<stdio.h>
int main () {
    // Take a number 1-7 and print the corresponding day using switch
    int day;
    printf("enter the day by 1-7: ");
    scanf("%d", &day);
    switch(day) {
        case 1 : printf("Monday");
        break;
        case 2 : printf("Tuesday");
        break;
        case 3 : printf("Wednesday");
        break;
        case 4 : printf("Thursday");
        break;
        case 5 : printf("Friday");
        break;
        case 6 : printf("Saturday");
        break;
        case 7 : printf("Sunday");
        break;
        default : printf("invalid day");
    }
    return 0;
}