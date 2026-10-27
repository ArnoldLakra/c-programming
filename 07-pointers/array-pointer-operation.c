#include<stdio.h>
void printArray(int *ptr, int size);
void largestElement(int *ptr, int size);
void sumElements(int *ptr, int size);
void reverseArray(int *ptr, int size);
int main() {
    int size;
    printf("enter size: ");
    scanf("%d", &size);
    printf("enter %d elements: ", size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int *ptr=arr;
    printArray(ptr, size);
    largestElement(ptr, size);
    sumElements(ptr, size);
    reverseArray(ptr, size);
}
void printArray(int *ptr, int size){
    printf("Array elemets: ");
    for(int i=0; i<size; i++){
        printf("%d ", *(ptr+i));
    }
}
void largestElement(int *ptr, int size){
    int largest=*ptr;
    for(int i=0; i<size; i++){
        if(*(ptr+i)>largest){
            largest=*(ptr+i);
        }
    }
    printf("\nlargest element: %d", largest);
}
void sumElements(int *ptr, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+*(ptr+i);
    }
    printf("\nsum: %d", sum);
}
void reverseArray(int *ptr, int size){
    int temp, rev=size-1;
    for(int i=0; i<size; i++){
        if(rev/2==i && rev%2==0){
            break;
        }
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+(rev-i));
        *(ptr+(rev-i))=temp;
        if(rev/2==i && rev%2==1){
            break;
        }
    }
    printf("\nreverse elements: ");
    for(int i=0; i<size; i++){
        printf("%d ", *(ptr+i));
    }
}