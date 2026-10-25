#include<stdio.h>
void rotateLeft(int arr[], int size, int rotateNumber);
void rotateRight(int arr[], int size, int rotateNumber);
int main() {
    int size, rotation, rotateNumber;
    printf("enter array size: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter %d numbers: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("enter 0 to rotate array to left or 1 to right: ");
    scanf("%d", &rotation);
    printf("enter number of rotation 1-n: ");
    scanf("%d", &rotateNumber);
    if(rotation==0 && rotateNumber>0){
        rotateLeft(arr, size, rotateNumber);
    } else if(rotation==1 && rotateNumber>0){
        rotateRight(arr, size, rotateNumber);
    } else {
        printf("invalid input");
    }
    return 0;
}
void rotateLeft(int arr[], int size, int rotateNumber){
    int temp;
    for(int i=1; i<=rotateNumber; i++){      // method using a single array
        temp=arr[0];                         // saving the first postion element
        for(int j=0; j<size; j++){
            arr[j]=arr[j+1];                // changing element from first position to second last
        }
        arr[size-1]=temp;                  // swapping the first position element to last
    }
    printf("after rotation: ");
    for(int k=0; k<size; k++){
        printf("%d ", arr[k]);
    } 
}
void rotateRight(int arr[], int size, int rotateNumber){
    int temp;
    for(int i=1; i<=rotateNumber; i++){
        temp=arr[size-1];
        for(int j=size-1; j>=1; j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    printf("after rotation: ");
    for(int k=0; k<size; k++){
        printf("%d ", arr[k]);
    } 
}