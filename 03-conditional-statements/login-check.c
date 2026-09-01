#include<stdio.h>
int main() {
    // username is 1
    // password is 1122
    int username;
    int password;
    printf("enter your username: ");
    scanf("%d", &username);
    if(username==1) {
        printf("enter your password: ");
        scanf("%d", &password);
        if(password==1122) {
            printf("access granted");
        } else {
            printf("wrong password");
        }
    } else {
        printf("wrong username");
    }
    return 0;
}