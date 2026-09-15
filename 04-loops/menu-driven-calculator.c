#include<stdio.h>
int main () {
    int a, b;
    int choice=0;
    while(choice!=5) {
        printf("=====Calculator=====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n\n");
        printf("choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1 : printf("enter numbers: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n\n", a+b);
            break;
            case 2 : printf("enter number: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n\n", a-b);
            break;
            case 3 : printf("enter number: ");
            scanf("%d %d", &a, &b);
            printf("Result: %d\n\n", a*b);
            break;
            case 4 : printf("enter numbers: ");
            scanf(" %d %d", &a, &b);
            if(b!=0) {
                printf("Result: %d\n\n", a/b);
            } else {
                printf("error\n\n");
            }
            break;
            case 5 : printf("Exiting...");
            break;
            default : printf("invalid\n\n");
        }
    }
    return 0;
}