#include<stdio.h>
int main () {
    // Taking marks as a input from the user and printing grade: A/B/C/D/F using if-else
    int marks;
    printf("enter your marks: ");
    scanf("%d", &marks);
    if(marks>80 && marks <=100) {
        printf("A");
    } else if(marks>60 && marks<=80) {
        printf("B");
    } else if(marks>40 && marks<=60) {
        printf("C");
    } else if(marks>20 && marks<=40) {
        printf("D");
    } else if(marks>=0 && marks<=20) {
        printf("F"); }
          else {
        printf("invalid marks");
    }
    return 0;
}