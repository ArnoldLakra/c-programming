#include<stdio.h>
//taking input from the user and giving them different output using arithematic operators
int main () {
    int a, b;
    printf("enter a number: ");              //first input
    scanf("%d", &a);
    printf("enter the second number: ");    //second input
    scanf("%d", &b);
    printf("Addition: %d\n", a+b);             
    printf("Subtraction: %d\n", a-b);            
    printf("Multiplication: %d\n", a*b);      
    printf("Division: %d\n", a/b);
    printf("Remainder: %d\n", a%b);
    return 0;
}