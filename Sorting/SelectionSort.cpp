#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void inputArray(int arr[], int n){
    for (int i=0 ; i<n ; i++){
        scanf("%d", &arr[i]);
    }
}

void swap(int &a, int &b){
    int temp = a ;
    a = b;
    b = temp;
}

void SelectionSort(int arr[], int n){
    for(int step=0; step<n-1; step ++){
        int i_min = step;
        for(int i=step+1; i<n; i++){
            if (arr[i_min] > arr[i])
                i_min = i;
        }
        swap(arr[i_min], arr[step]);
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n ; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[1000], n;
    printf("Input size of array : ");
    scanf("%d", &n);
    inputArray(arr,n);
    SelectionSort(arr,n);
    printArray(arr,n);
}