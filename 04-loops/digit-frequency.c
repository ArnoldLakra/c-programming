#include<stdio.h>
int main () {
    // count a number how many times each digit occurs
    int n=1223342;
    int change;
    int digit=0;
    for(int i=0; i<=9; i++) {     // to check digits from 0 to 9
        change=n;
        int count=0;
        while(change>0) {
            digit=change%10;           // take a digit
            change=change/10;          // remove a digit
            if(i==digit) {
                count++;            // counts everytime when a digit matches to i
            }
        }
        printf("%d occurs %d times\n", i, count);
        
    }
    return 0;
}