#include<stdio.h>
int main() {
    // counting digits ocuurance in n numbers
    int n, change;
    printf("enter number: ");
    scanf("%d", &n);
    if(n<0) {
        printf("use postive numbers");
    } else {
        for(int i=0; i<=9; i++) {
            change=n;           // reset the number to count other digits from 0-9
            int count=0;
            int digit=0;
            while(change>0) {
                digit=change%10;       // take digit 1 by 1
                change=change/10;       
                if(digit==i) {
                    count++;         // count
                }
            }
            printf("%d occurs %d times\n", i, count);
        }
    }
    return 0;
}