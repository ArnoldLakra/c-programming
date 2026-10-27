#include<stdio.h>
void oddEquilibrium(int arr[], int size);            
void evenEquilibrium(int arr[], int size);
int main() {
    int size;
    printf("enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("enter %d elements: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("equilibrium at ");
    (size%2==1) ? oddEquilibrium(arr, size) : evenEquilibrium(arr, size);
    return 0;
}
void oddEquilibrium(int arr[], int size){
    int sum1=0, sum2=0, equi=0;
    for(int i=0; i<=size/2; i++){
        sum1=sum1+arr[i];
        sum2=sum2+arr[(size-1)-i];
        if(sum1==sum2){
            printf("%d ", i);
            equi=1;
        }
    }
    if(equi==0){
        printf("none");
    }
}
void evenEquilibrium(int arr[], int size){         
    int sum1=0, sum2=0, equi=0;
    for(int i=0; i<size; i++){
        sum1=sum1+arr[i];
        sum2=sum2+arr[(size-1)-i];
        if(sum1==sum2){
            printf("%d", i);
            equi=1;
        }
    }
    if(equi==0){
        printf("none");
    }
}