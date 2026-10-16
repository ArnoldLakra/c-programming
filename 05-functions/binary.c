#include<stdio.h>
void binary(int decimal){
    int digit=0, n=0, reverse=0, count=0;
    while(decimal>0){
        digit=decimal%2;
        decimal=decimal/2;
        if(digit==0 && n==0){
            digit=10;
        }
        reverse=reverse*10+digit;
        n=1;
        count++;
    }
    printf("Binary = ");
    for(int i=1; i<=count; i++){
        digit=reverse%10;
        reverse=reverse/10;
        printf("%d", digit);
    }
}
int main() {
    int decimal;
    printf("enter decimal: ");
    scanf("%d", &decimal);
    if(decimal==0){
        printf("Binary = 0");
        return 0;
    }
    binary(decimal);
    return 0;
}