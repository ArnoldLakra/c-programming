#include<stdio.h>
int largestElement(int arr[], int size);                 // calculates the largest element
int smallestElement(int arr[], int size);                        // calculates the smallest element   
int secondLargest(int arr[], int size, int largest, int smallest);     // calclates the second largest element
int sumElements(int arr[], int size);                     // calulate the sum
float averageElements(int arr[], int size, float sum);        // calculates the average
void removeDuplicates(int arr[], int size);                    // removes duplicates element and prints it
int main() {
    int size;
    printf("enter size: ");
    scanf("%d", &size);
    int arr[size];                       // array of a chosen size
    printf("enter %d numbers: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);           // user gives input
    }
    int largest=largestElement(arr, size);
    int smallest=smallestElement(arr, size);
    int secLargest=secondLargest(arr, size, largest, smallest);
    int sum=sumElements(arr, size);
    float average=averageElements(arr, size, sum);
    printf("largest number: %d\n", largest);
    printf("smallest element: %d\n", smallest);
    printf("second largest element: %d\n", secLargest);
    printf("sum: %d  and  average: %f\n", sum, average);
    removeDuplicates(arr, size);
    return 0;
}
int largestElement(int arr[], int size){
    int largest=arr[0];                   // let arr[0] be the largest
    for(int i=0; i<size; i++){
        if(arr[i]>=largest){
            largest=arr[i];
        }
    }
    return largest;
}
int smallestElement(int arr[], int size){
    int smallest=arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<=smallest){
            smallest=arr[i];
        }
    }
    return smallest;
}
int secondLargest(int arr[], int size, int largest, int smallest){
    int secLarge=smallest;
    for(int i=0; i<size; i++){
        if(arr[i]>=secLarge && arr[i]<largest){
            secLarge=arr[i];                  // secLarge stores the element which is the largest but smaller than largest
        }                                    // works for every condition
    }
    return secLarge;
}
int sumElements(int arr[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum=sum+arr[i];
    }
    return sum;
}
float averageElements(int arr[], int size, float sum){
    return sum/size;
}
void removeDuplicates(int arr[], int size){
    int visited[size];
    for(int i=0; i<size; i++){
        visited[i]=0;               // filling same size of visited array of 0 to mark
    }
    for(int i=0; i<size; i++){
        if(visited[i]==0){
            for(int j=i+1; j<size; j++){
                if(arr[i]==arr[j]){
                    visited[j]=1;                // this marks wherever the duplicates are located
                }
            }
        }
    }
    printf("by removing duplicates: ");
    for(int k=0; k<size; k++){
        if(visited[k]==0){
            printf("%d ", arr[k]);         // 1 is marked in the same index value as the original for the duplicates
        }
    }
}
