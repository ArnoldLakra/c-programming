#include<stdio.h>
int main () {
    // checking whether the person has both an id and a ticket
    // 1 is yes and 0 is no
    int hasID=1;                 // 1 says yes
    int hasTicket=1;             // 1 says yes
    printf("do you have an ID: ");
    scanf("%d", &hasID);
    printf("do you also have an Ticket: ");
    scanf("%d", &hasTicket);
    printf("Permission: %d", hasID==1 && hasTicket==1);
    return 0;
}