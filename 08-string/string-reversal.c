#include<stdio.h>
#include<string.h>                // header file for string functions
void stringReversal(char sentence[], int size){
    char *p=strrev(sentence);
    puts(p);                       // gives a string ouput untill it meets \0
}
int main() {
    char sentence[100];
    printf("enter a sentence under 100 words: ");
    fgets(sentence, 100, stdin);            // takes input uner 100 words allowing to leave spaces in between 
    stringReversal(sentence, 100);           
}