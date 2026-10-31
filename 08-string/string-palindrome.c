#include<stdio.h>
#include<string.h>
int main() {
    char word[46], rev[46];
    printf("enter a word: ");
    scanf("%s", &word);
    char *p=strcpy(rev, word);
    p=strrev(rev);
    int x=strcmp(word, rev);
    if(x==0){
        printf("palindrome");
    } else {
        printf("not plaindrome");
    }
    return 0;
}