#include<stdio.h>
void frequencyElements(int arr[], int size);
void frequencyTarget(int arr[], int size);
int main() {
    int size, frequency;
    printf("enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter %d numbers: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter 0 for every element frequency or 1 or choose the element: ");
    scanf("%d", &frequency);
    if(frequency==0){                        // gives the frequency of ever elemts
        frequencyElements(arr, size);
    } else if(frequency==1){                 // choose an element you want the frequency of
        frequencyTarget(arr, size);
    } else {
        printf("invalid input;");
    }
    return 0;
}
void frequencyElements(int arr[], int size){
    int count=0, visited[size];
    for(int i=0; i<size; i++){
        visited[i]=0;
    }
    for(int i=0; i<size; i++){
        count=0;
        if(visited[i]==0){                    // to print the element not more than once
        for(int j=1; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
            }
        }
        printf("%d appeared %d times\n", arr[i], count);  
     } }
}
void frequencyTarget(int arr[], int size){
    int target, count=0;
    printf("enter frequency target: ");
    scanf("%d", &target);
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            count++;
        }
    }
    printf("%d appeared %d times", target, count);
}