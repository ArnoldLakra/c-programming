#include<stdio.h>
int main () {
    float a, b;
    char op;
    printf("calulation between two numbers: ");
    scanf("%f %c %f", &a, &op, &b);
    switch (op) {
        case '+' : printf("%f", a+b);
        break;
        case '-' : printf("%f", a-b);
        break;
        case '*' : printf("%f", a*b);
        break;
        case '/' : printf("%f", a/b);
        break;
        default : printf("invalid input");
    }
    return 0;
}