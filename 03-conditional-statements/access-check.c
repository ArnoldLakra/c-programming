#include<stdio.h>
int main () {
    // Checking whether a person is eligible for access: age>=18 and ID available
    // 1 means they have an ID
    int age;
    int ID;
    printf("enter your age: ");
    scanf("%d", &age);
    if(age>=18) {
        printf("your ID: ");
        scanf("%d", &ID);
        if(ID==1) {
            printf("access granted");
        } else {
            printf("access denied");
        }
    } else {
        printf("too young");
    }
    return 0;
}